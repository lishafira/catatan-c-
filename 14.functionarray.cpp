#include <iostream>
using namespace std;

// function prototype
int countGreaterThan(int arr[], int size, int threshold);

int main() {

    int a;      // 4 byte
    long b;     // 8 byte
    float c;    // 4 byte
    double d;   // 8 byte
    char e;     // 1 byte

    int arr[7]; // 28 byte

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    // Mendeklarasikan dan menginisialisasi array
    int numbers[] = {5, 8, 12, 3, 7, 10, 15, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int threshold = 7;

    // Memanggil fungsi dan menampilkan hasilnya
    int result = countGreaterThan(numbers, size, threshold);
    cout << "Jumlah elemen yang lebih besar dari " << threshold << " adalah: " << result << endl;

    return 0;

}

// Definition function
int countGreaterThan(int arr[], int size, int threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > threshold) {
            count++;
        }
    }
    return count;
}
