#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x;
    int y;
};

int main() {
    Point P = {1, 3};
    cout << &P << endl;
    cout << &(P.x) << endl;
    cout << &(P.y) << endl;\
    // Địa chỉ của biến P là địa chỉ của trường X
    return 0;
}
