#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Masukkan bilangan: ";
    cin >> num;

    if (num < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " bilangan prima." << endl;
    else
        cout << num << " bukan prima." << endl;

    return 0;
}
