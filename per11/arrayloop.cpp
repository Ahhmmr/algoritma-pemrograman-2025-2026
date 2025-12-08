#include<iostream>
#include<vector>
using namespace std;

int main(){
    int NIM;
    cout << "Masukan NIM: ";
    cin >> NIM;

    int arru[7];
    
    for (int i=0; i<NIM; i++){
        cin>> arru[i];
        cout << arru[i] << endl;
    }
    int total = 0;
    int maks = arru[0];
    int min = arru[0];

    for (int i=0; i<NIM; i++){
        total += arru[i];
        if (arru[i] > maks){
            maks = arru[i];
        }
        if (arru[i] < min){
            min = arru[i];
        }
    }

    double mean = (double) total / NIM;

    for (int i=0; i<NIM; i++){
        swap(arru[i], arru[NIM-i-1]);
    }

    cout << "Total: " << total << endl;
    cout << "Mean: " << mean << endl;   
    cout << "Maks: " << maks << endl;
    cout << "Min: " << min << endl;
    cout << "Array Terbalik: ";
    for (int X : arru) cout << X << " ";
    cout << endl;

    return 0;


}