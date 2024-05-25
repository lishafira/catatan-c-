#include <iostream>
using namespace std;

// prosedure tampa parameter
void hitungLuasSegitiga() {
    double alas, tinggi, luas;

    cin >> alas >> tinggi;

    luas = 0.5 * alas * tinggi;
    cout << "Luas = " << luas << endl;
}

// prosedure dengan parameter masukan
void hitungLuasSegitiga2(double alas, double tinggi) {
    double luas;

    luas = 0.5 * alas * tinggi;
    cout << "Luas = " << luas << endl;
}

// prosedure dengan parameter keluaran
void hitungLuasSegitiga3(double alas, double tinggi, double *luas) {

    *luas = 0.5 * alas * tinggi;
}

// prosedure dengan parameter masukan dan keluaran
void tukarNilai(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    // cout << "a = " << *a << endl;
    // cout << "b = " << *b << endl;

}


int main() {
    
    // prosedure tampa parameter
    hitungLuasSegitiga();
    hitungLuasSegitiga();


    // prosedure dengan parameter masukan
    hitungLuasSegitiga2(3, 7);
    double a = 5;
    double t = 10;
    hitungLuasSegitiga2(a, t);


    // prosedure dengan parameter keluaran
    double l;
    hitungLuasSegitiga3(3, 7, &l);
    cout << "Luas = " << l << endl;

    // prosedure dengan parameter masukan dan keluaran
    int x = 5;
    int y = 8;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    tukarNilai(&x, &y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

}

