#include <iostream>
using namespace std;

int main() {

    int A[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = 0;
        }
    }

    // i=0
    //      j=0  A[0][0]=0
    //      j=1  A[0][1]=0
    //      j=2  A[0][2]=0
    // i=1
    //      j=0  A[1][0]=0
    //      j=1  A[1][1]=0
    //      j=2  A[1][2]=0


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // i=0
    //      j=0    print A[0][0]
    //      j=1    print A[0][1]
    //      j=2    print A[0][2]
    //      j=3
    //      print endl
    // i=1
    //      j=0    print A[1][0]
    //      j=1    print A[1][1]
    //      j=2    print A[1][2]
    //      j=3
    //      print endl





    // Isi nilai matrik dari input user
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << "_";
        }
        cout << endl;
    }


    cout << A[0][1] + A[1][1];



    // Menjulahkan dua matrik
    int X[2][3], Y[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> X[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> Y[i][j];
        }
    }

    int Z[2][3];
    cout << "Hasil" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << X[i][j] + Y[i][j] << " ";
            // Z[i][j] = X[i][j] + Y[i][j];

        }
        cout << endl;
    }
}

