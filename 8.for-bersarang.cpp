#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "kalimat ini berapa kali di cetak?" << endl;
        }
        cout << endl;
    } 

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cout << i << "," << j << "  ";
        }
        cout << endl;
    }   

    cout << endl;

    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }  

    cout << endl;

    n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }  



}