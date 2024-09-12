#include <iostream>
using namespace std;

void jumlah(int a, int b);

int main() {
    int a1;
    int a2;
    cout << "Masukkan angka pertama : \n";
    cin >> a1;
    cout << "\nMasukkan angka kedua\n";
    cin >> a2;
    cout << "\nHasilnya adalah" << jumlah(a1,a2)
    

};

 int jumlah(int a, int b){

    return a+b;
};