#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    Date date;
    
    date.day = 5;
    date.month = 1;
    date.year = 2020;
    
    cout << date.day << endl;
    cout << date.month << endl;
    cout << date.year << endl;

    date.year = date.year + 5;
    cout << date.year << endl;

}

