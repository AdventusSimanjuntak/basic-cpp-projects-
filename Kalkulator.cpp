#include <iostream>
using namespace std;

int main() {
    float bil1, bil2, hasil;
    char op;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    switch(op) {
        case '+':
            hasil = bil1 + bil2;
            break;
        case '-':
            hasil = bil1 - bil2;
            break;
        case '*':
            hasil = bil1 * bil2;
            break;
        case '/':
                hasil = bil1 / bil2;
            break;
    }

    cout << "Hasil: " << hasil << endl;
    return 0;
}
