#include <iostream>
using namespace std;

int main(){
    char nama_barang[50];
    int harga;
    int jumlah;

    cout << "Masukkan nama barang: ";
    cin >> nama_barang;
    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;
    int total = harga * jumlah;
    double diskon;

    if(total > 53100){
        diskon = total * 0.1;
    }else {
        diskon = 0;
    }
    int bayar = total - diskon;
    
    cout << "\n=====struk pembelian Jokomart=====" << endl;
    cout << "Nama Pembeli : " << nama_barang << endl;       
    cout << "Harga Barang : Rp. " << harga << endl;
    cout << "Jumlah Barang : " << jumlah << endl;  
    cout << "Total Harga : Rp. " << total << endl;
    cout << "Diskon : Rp. " << diskon << endl;  
    cout << "Total Bayar : Rp. " << bayar << endl;
    cout << "===============================" << endl;
    return 0;
}