#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
    void in(){
        cout << "nhap toa do x:";
        cin >> x;
        cout << "nhap toa do y:";
        cin >> y;
    }
    void print(){
    cout << "(" << x << "," << y << ")";
    }

};

Point mid_point1(const Point p1, const Point p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}
Point mid_point2(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}
int main() {
    Point p1,p2;
    cout << "Nhap toa do point 1\n";
    p1.in();
    cout << endl;
    cout << "Nhap toa do point 2\n";
    p2.in();
    cout << endl;
    cout << "Toa do cua point 1:";
    p1.print();
    cout << endl;
    cout << "Toa do cua point 2:";
    p2.print();
    cout << endl;
    cout << "Trung diem su dung tham bien: ";
    Point mid1=mid_point1(p1,p2);
    mid1.print();
    cout << endl;
    cout << "Trung diem su dung tham tri: ";
    Point mid2=mid_point2(p1,p2);
    mid2.print();
    cout << endl;

    return 0;
}

