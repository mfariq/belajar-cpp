#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan Nilai anda : ";
    cin >> nilai;
    if (nilai>=85) {
        cout << "Predikat anda adalah A";
    } else if (nilai>=80) {
        cout << "Predikat anda adalah A-";
    } else if (nilai>=75) {
        cout << "Predikat anda adalah B+";
    } else if (nilai >= 70) {
        cout << "Predikat anda adalah B";
    } else if (nilai >= 65) {
        cout << "Predikat anda adalah B-";
    } else if (nilai >= 60) {
        cout << "Predikat anda adalah C+";
    } else if (nilai >= 55) {
        cout << "Predikat anda adalah C";
    } else if (nilai >= 40) {
        cout << "Predikat anda adalah D";
    } else {
        cout << "Predikat anda adalah E";
    }
    cin.get();
}