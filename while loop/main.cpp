#include <iostream>
using namespace std;

int main() {
    int t = 0;
    int i = 1;
    string mhs;
    int n;
    int mk;
    cout << "Masukkan jumlah mata kuliah : ";
    cin >> mk;
    cout << "Masukkan nama mahasiswa : ";
    cin >> mhs;
    while (i<=mk) {
        cout << "Masukkan nilai ke-" << i << " : ";
        cin >> n;
        if (n>100) {
            cout << "Nilai Maksimal adalah 100" << endl;
            break;
        } else {
        t=t+n;
        i++;
        }
    }
    int rt = t/mk;
    if (rt != 0) {
        cout << "Nilai Rata-rata " << mhs << " adalah " << rt;
    } else {
        cout << "Program gagal dijalankan";
    }
}