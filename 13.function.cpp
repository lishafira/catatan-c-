#include <iostream>

using namespace std;

int g(int x, int y) {
    // int result = 2*x + y;

    return 2*x + y;
}

bool isGenap(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }

    cout << "ini tidak di eksekusi";
}

int main() {

    cout << g(3,7) * 10 << endl;

    int x=3, y=10;
    int result = g(x,y);
    cout << result << endl;


    cout << isGenap(8) << endl;

    if (isGenap(8) == true) {
        cout << "genap";
    } else {
        cout << "ganjil";
    }

}



// f(x) = 2x + 5
// f(3) = 2*3 + 5 = 11
// f(3) = 11

// g(x,y) = 2*x + y;
// g(3,7) = 2*3 + 7 = 13
// g(3,7) = 13



// 2 9 1
// max = 9

// 2 3 8
// max = 8

// 7 4 6
// max = 7


