#include <iostream>
using namespace std;

int main(){
    
    string nama;
    int umur;

    cout << "masukan nama : ";
    cin >> nama;                        // gunakan getline(cin, nama); untuk membaca beberapa kata
    cout << "masukan umur : ";
    cin >> umur;

    cout << "nama : " << nama << endl;
    cout << "umur : " << umur << endl;

    // deklarasi banyak variabel dalam satu baris
    int a, b, c;        

    cout << "masukan tiga angka dalam satu baris atau tiga baris" << endl;

    cin >> a >> b >> c;         // bisa 1 2 3 bisa juga satu angka satu baris
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}