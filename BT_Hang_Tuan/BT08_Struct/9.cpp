#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x;
    int y;
};

void Value(Point p) {
    p.x = 3;
    p.y = 4;
    cout <<&(p.x) << " " << &(p.y) << endl;
}

void Ref(Point &p) {
    p.x = 2;
    p.y = 3;
    cout << &(p.x) << " " << &(p.y) << endl;
}


int main() {
    Point point = {6, 7};
    cout << &(point.x) << " " << &(point.y) << endl;
    Value(point);
    cout << &(point.x) << " " << &(point.y) << endl;
    Ref(point);
    return 0;
}
