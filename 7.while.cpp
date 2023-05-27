#include <iostream>
using namespace std;

int main(){

    int i = 0;
    while (i < 10) {
        cout << "hello world" << endl;
        cout << "hello" << endl;
        i++; // i = i + 1;
    }

    cout << endl;

    i = 0;
    while (i < 5) {
        cout << i << endl;
        i++;
    }
    
    cout << endl;
    
    int n = 7;
    i = 0;
    while (i < n) {
        cout << i << endl;
        i++;
    }

    cout << endl;

    // menjumlahkan 1+2+3+4+...+(n-1)+n
    int jumlah = 0;
    i = 1;
    while (i <= n) {
        jumlah = jumlah + i;                
        i++;
    }
    cout << "jumlah = " << jumlah << endl;
    
    cout << endl;
    cout << "masukan lima angka, satu baris satu angka" << endl;

    jumlah = 0;
    n = 5;
    int num;
    i = 1;
    while (i <= n) {
        cin >> num;
        jumlah = jumlah + num;                
        i++;
    }
    cout << "jumlah = " << jumlah << endl;
    cout << "rata-rata = " << jumlah/n << endl;

    cout << endl;

    i = 10;
    while (i > 0) {                             // bisa juga pakai i >= 1
        cout << i << endl;
        i--; // i = i - 1;
    }



}