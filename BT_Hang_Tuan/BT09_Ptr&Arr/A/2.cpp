#include<bits/stdc++.h>
using namespace std;
int main()
{
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p; // xoá bộ nhớ của p quá sớm, dẫn đến p2 trỏ đến một vị trí k tồn tại
     *p2 = 100;
     cout << *p2;
     delete p2;
}
