#include <iostream>
using namespace std;
//mendefinisikan fungsi
//untuk menukar dua buah bilangan
void tukarbilangan(int & X,int & Y){
int Z = X;
X = Y ;
Y = Z ;
    //menampilkan bilangan
    //yang ada di dalam fungsi
    cout<<"didalam fungsi"<<endl;
    cout<<"bilangan ke-1 : "<<X<<endl;
    cout<<"bilangan ke-2 : "<<Y<<endl;
    cout<<endl;
}
//fungsi utama
int main(){
    //mendeklarasikan variabel
    //bilangan1 dan bilangan2
    int bilangan1,bilangan2;
    cout<<"masukan bilangan pertama : ";
    cin>>bilangan1;
    cout<<"masukan bilangan kedua : ";
    cin>>bilangan2;
    cout<<endl;

    //menampilkan nilai awal
    cout<<"keadaan awal"<<endl;
    cout<<"bilangan ke-1 : "<<bilangan1<<endl;
    cout<<"bilangan ke-2 : "<<bilangan2<<endl;
    cout<<endl;
    //memanggil fungsi tukar bilangan()
    tukarbilangan(bilangan1,bilangan2);
    //menampilkan nilai akhir
    //memanggil fungsi tukar bilangan()
    tukarbilangan(bilangan1,bilangan2);
    cout<<"keadaan akhir "<<endl;

    tukarbilangan(bilangan1,bilangan2);
    return 0;
}
