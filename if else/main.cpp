#include <iostream>
using namespace std;

int main() {
    int usia;
    cout << "Masukkan Usia anda  : ";
    cin >> usia;
    if (usia >= 18) {
        cout << "anda sudah dewasa";
    } else {
        cout << "anda masih dibawah umur";
    }
}