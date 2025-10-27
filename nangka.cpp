#include<iostream>
using namespace std;

main(){
    int a,b;
    cout<<"masukan angka pertama:";
    cin>>a;
    cout<<"masukan angka kedua:";
    cin>>b;

    if(a>b){
        cout<<a<<"lebih besar dari"<<b<<endl;
    }
    else if(a<b){
        cout<<a<<"lebih kecil dar"<<b<<endl;
    }
    else{
        cout<<"keduanya sama besar"<<endl;
        cout<<"apakah keduanya sama besar"<<(a==b);
    }
}