#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "masukan element array yang ingin dibuat : ";
    cin >> n;
    int A[n];

    cout << "masukan " << n << " angka" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int mak = A[0];
    for (int i=1; i<n; i++) {
        if (A[i] > mak) {
            mak = A[i];
        }
    }
    cout << "mak = " << mak << endl;

    cout << endl;

    cout << "masukan " << n << " angka" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int min = A[0];
    for (int i=1; i<n; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }
    cout << "min = " << min << endl;

    cout << endl;

    cout << "masukan " << n << " angka" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int indexMin = 0;
    for (int i=1; i<n; i++) {
        if (A[i] < A[indexMin]) {
            indexMin = i;
        }
    }
    cout << "Nilai minimum ada di index " << indexMin << endl;

}
