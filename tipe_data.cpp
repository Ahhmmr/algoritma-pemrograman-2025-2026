#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

main()
{

    char a[30] = "---BELAJAR TIPE DATA---";
    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;

    b = 10000;
    c = 10000000;
    d = 100000000000;
    e = 3.12;
    f = 3.12345;

    cout << a << endl;
    cout << "Tipe data short:" << b << endl;
    cout << "Tipe data int:" << c << endl;
    cout << "Tipe data long:" << d << endl;
    cout << "Tipe data float:" << e << endl;
    cout << "Tipe data double:" << f << endl;
    cout << endl;

    cout << "Berikut hasil Bolean:" << endl;
    cout << (g > h) << endl;  // false
    cout << (g < h) << endl;  // true
    cout << (g == h) << endl; // false
    cout << (g != h) << endl; // true
}
