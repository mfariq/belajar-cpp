#include <iostream>
using namespace std;

int main() {
    int opsi;
    int ap;
    int ak;
    int h;
    cout << "Ini adalah sebuah program kalkulator, Pilih opsi dibawah ini\n";
    cout << "1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n";
    cout << "Masukkan opsi : ";
    cin >> opsi;
    if (opsi==1) {
        cout << "Masukkan angka pertama : ";
        cin >> ap;
        cout << "Masukkan angka kedua : ";
        cin >> ak;
        h = ap+ak;
        cout << "Hasilnya adalah : " << h;
    } else if (opsi==2) {
        cout << "Masukkan angka pertama : ";
        cin >> ap;
        cout << "Masukkan angka kedua : ";
        cin >> ak;
        h = ap-ak;
        cout << "Hasilnya adalah : " << h;
    } else if (opsi==3) {
        cout << "Masukkan angka pertama : ";
        cin >> ap;
        cout << "Masukkan angka kedua : ";
        cin >> ak;
        h = ap*ak;
        cout << "Hasilnya adalah : " << h;
    } else if (opsi==4) {
        cout << "Masukkan angka pertama : ";
        cin >> ap;
        cout << "Masukkan angka kedua : ";
        cin >> ak;
        h = ap/ak;
        cout << "Hasilnya adalah : " << h;
    } else {
        cout << "Opsi tidak ditemukan";
    }
}