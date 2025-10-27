#include <iostream>
using namespace std;

main()
{
    float tugas, uts, uas, nilaiAkhir;

    cout << "Masukan nilai tugas:";
    cin >> tugas;
    cout << "Masukan nilai uts:";
    cin >> uts;
    cout << "Masukan nilai uas:";
    cin >> uas;

    nilaiAkhir = (0.3 * tugas) + (0.3 * uts) + (0.3 * uas);

    cout << "Nilai Akhir" << nilaiAkhir << endl;
    if (nilaiAkhir >= 60)
    {
        cout << "status: LULUS";
    }
    else
    {
        cout << "status: TIDAK LULUS";
    }
}