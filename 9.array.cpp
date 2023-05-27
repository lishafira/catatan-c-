#include <iostream>
using namespace std;

int main(){

    int nums[10];       // dari index 0 sampai index 9

    // inisialisasi nilai array pada index 0, 1, dan 2
    nums[0] = 6;
    nums[1] = 3;
    nums[2] = 7;

    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;

    cout << endl;

    nums[1] = 9999;
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;

    cout << endl;

    // inisialisasi semua index array dengan nilai 0
    for (int i = 0; i < 10; i++) {
        nums[i] = 0;
    }

    // cetak semua nilai array
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << endl;
    }

    cout << endl;

    // inisialisasi semua index array dengan nilai i
    for (int i = 0; i < 10; i++) {
        nums[i] = i;
    }

    // cetak semua nilai array
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << endl;
    }
    
    cout << endl;

    // inisialisasi semua index array dengan pembacaan pada input
    cout << "masukan lima angka, satu baris satu angka" << endl;
    int n = 5;
    int x[n];                           // jumlah element array sebanyak n
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // cetak semua nilai array
    for (int i = 0; i < n; i++) {
        cout << "nums[" << i << "] = " << nums[i] << endl;
    }

    // hitung rata-rata array nums
    int jumlah = 0;
    double rataRata;
    for (int i = 0; i < n; i++) {
        jumlah = jumlah + nums[i];
    }    
    cout << "jumlah : " << jumlah << endl;
    rataRata = jumlah/n * 1.0;                          //     rataRata = double(jumlah/n);
    cout << "rata-rata : " << rataRata << endl;

}