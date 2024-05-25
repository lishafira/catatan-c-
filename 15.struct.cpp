#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

Point findMidPoint(Point p1, Point p2) {
    Point pt;

    pt.x = (p1.x + p2.x) / 2;
    pt.y = (p1.y + p2.y) / 2;

    return pt;
}



int main() {

    // double x1, y1, x2, y2, xt, yt;
    Point p1, p2;

    p1.x = 4;
    p1.y = 10;

    p2.x = 2;
    p2.y = 8;

    Point pt = findMidPoint(p1, p2);

    cout << "xt = " << pt.x << endl;
    cout << "yt = " << pt.y << endl;   
}


// Time j1 = bacaJam();
// Time j2 = bacaJam();



