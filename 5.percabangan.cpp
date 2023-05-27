#include <iostream>
using namespace std;

int main(){
    
    string name = "Andromeda";
    if (name == "Andromeda") {
        cout << "Halo andromeda" << endl;
    }

    int x = 5;
    if (x % 2 == 0) {
        cout << "genap" << endl;
    } else {
        cout << "ganjil" << endl;
    }

    int y = 8;
    if (y > 0) {
        cout << "positif" << endl;
    } else if (y < 0) {
        cout << "negatif" << endl;
    } else {
        cout << "nol" << endl;
    }

    int number = 8;
    if (number >= 1000) {
        cout << "ribuan" << endl;
    } else if (number >= 100) {
        cout << "ratusan" << endl;
    } else if (number >= 10) {
        cout << "puluhan" << endl;
    } else {
        cout << "satuan" << endl;
    }

    number = 5;
    switch (number) {
    case 1:
        cout << "satu" << endl;
        break;
    case 2:
        cout << "dua" << endl;
        break;
    case 3:
        cout << "tiga" << endl;
        break;
    case 4:
        cout << "empat" << endl;
        break;
    case 5:
        cout << "lima" << endl;
        break;  
    default:
        cout << "number bukan 1-5";
        break;
    }

    // operator perbandingan 
    // > >= < <= == !=

    // percabangan yang menggunakana operator logika 
    // && || !
    int a = 5;
    if (a > 0 && a < 10 && a % 2 == 0) {
        cout << "a adalah satuan dan genap" << endl;
    }


    // percabangan bersarang
    int mak;
    int p = 17, q = 5, r = 1;
    if (p > q) {
        if (p > r) {
            mak = p;
        } else {
            mak = r;
        }
    } else {
        if (q > r) {
            mak = q;
        } else {
            mak = r;
        }
    }

    cout << "mak = " << mak << endl;
}