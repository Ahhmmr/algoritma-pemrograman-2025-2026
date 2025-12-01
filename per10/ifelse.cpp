#include <iostream>
using namespace std;

int main() {
    

    char nama[50];
    bool isAhmar = true;
    int NIM;

    cout << "Masukkan nama Anda: ";
    cin >> nama;
    

    if (string(nama) != "Ahmar"){
        isAhmar = false;
        cout << isAhmar << endl;
        cout << "nama salah, tolong masukan ulang nama!" << endl;
        return main();
    }
    cout << "\n masukan nim:";
    cin >> NIM;

    cout << "Nama : " << nama << endl;
    cout << "saldo : Rp. " << NIM << endl;

    cout << "=====Menu ATM====="<< endl;
    cout << "1. Cek saldo" << endl;
    cout << "2. Tarik tunai" << endl;
    cout << "3. Setor tunai" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. keluar" << endl;
    
    int menu;
    cout << "Pilih menu : ";
    cin >> menu;

    switch (menu)
    {
    case 1 : cout << "Saldo Anda adalah Rp. " << NIM << endl; break;
    case 2 : cout << "Fitur tarik tunai belum tersedia" << endl; break;
    case 3 : cout << "Fitur setor tunai belum tersedia" << endl; break;
    case 4 : cout << "Fitur transfer belum tersedia" << endl; break;
    case 5 : cout << "Keluar dari program" << endl; break;
    
    default: cout << "Menu tidak tersedia" << endl;
        break;
    }
    
    return 0;
}