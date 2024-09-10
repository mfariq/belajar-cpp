#include <iostream>
using namespace std;

int main(){
    int angka;
    cout << "berikut adalah contoh program menggunakan loop yang akan mencetak angka sesuai input\n" << endl;
    cout << "Masukkan angka : ";
    cin >> angka;
    for (int i = 1; i<=angka; i++) {
        cout << "Bilangan ke : " << i << endl;
    }

}