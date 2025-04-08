#include <iostream>
using namespace std;

int main() {
    int nomor1, nomor2, nomor3;

    cout << "Masukkan angka pertama: ";
    cin >> nomor1;
    cout << "Masukkan angka kedua: ";
    cin >> nomor2;
    cout << "Masukkan angka ketiga: ";
    cin >> nomor3;

    if (nomor1 > nomor2)
        swap(nomor1, nomor2);
    if (nomor1 > nomor3)
        swap(nomor1, nomor3);
    if (nomor2 > nomor3)
        swap(nomor2, nomor3);

    cout << "Urutan bilangan: " << nomor1 << ", " << nomor2 << ", " << nomor3 << endl;

    return 0;
}
