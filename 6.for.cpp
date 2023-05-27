#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i < 10; i++) {
        cout << "hello world" << endl;
        cout << "hello" << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    cout << endl;

    int n = 7;
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
    
    cout << endl;

    // menjumlahkan 1+2+3+4+...+(n-1)+n
    n = 10;
    int jumlah = 0;
    for (int i = 1; i <= n; i++) {
        jumlah = jumlah + i;                
    }
    cout << "jumlah = " << jumlah << endl;

    cout << endl;
    cout << "masukan lima angka, satu baris satu angka" << endl;

    // menjumlahkan nilai yang dibaca dari input
    n = 5;
    jumlah = 0;
    int num;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        jumlah = jumlah + num;                
    }
    cout << "jumlah = " << jumlah << endl;
    cout << "rata-rata = " << jumlah/n << endl;

    cout << endl;

    for (int i = 10; i > 0; i--) {          // bisa juga pakai i >= 1
        cout << i << endl;
    }
    

}