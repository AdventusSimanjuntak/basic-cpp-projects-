#include <iostream>
using namespace std;

int main(){
    int numbers[5], nilaimax;

    cout<<"Masukkan 5 bilangan: ";
    for (int i=0; i<5; i++){
        cin>>numbers[i];
    }

    nilaimax=numbers[0];

    for(int i=1; i<5; i++){
        if (numbers[i]>nilaimax){
            nilaimax=numbers[i];
        }
    }

cout<<"Nilai terbesar adalah: "<<nilaimax<<endl;
    return 0;
}