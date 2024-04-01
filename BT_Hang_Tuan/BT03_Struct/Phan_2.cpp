#include<bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
struct Rect {
    int x, y, w, h;
    bool contains(const Point& point) const {
        return (point.x >= x && point.x <= x + w && point.y >= y && point.y <= y + h);
    }
};
struct Ship {
    Rect rect;
    string id;
    int dx, dy;
    void move() {
        rect.x += dx;
        rect.y += dy;
    }
    void in(){
        cout<<"Nhap du lieu tau\n";
        cout<<"Nhap id:";
        cin>>id;
        cout<<endl;
        cout<<"Nhap toa do tau: ";
        cin>>rect.x>>rect.y;
        cout<<endl;
        cout<<"Nhap kich thuoc tau: ";
        cin>>rect.w>>rect.h;
        cout<<endl;
        cout<<"Nhap toc do tau dx,dy: ";
        cin>>dx>>dy;
        cout<<endl;
    }
};
void display(const Ship& ship) {
    cout << "ID: " << ship.id << ", Toa do: (" << ship.rect.x << "," << ship.rect.y << ")\n";
}

int main(){

    Ship ship1,ship2;
    ship1.in();
    ship2.in();
    for (int loop = 0; loop < 10; ++loop) {
        ship1.move();
        ship2.move();

        display(ship1);
        display(ship2);
    }

    return 0;
}
