#include <bits/stdc++.h>
using namespace std;
int main()
{

    int* pX1;
    cout<<pX1<<endl;     //0x10
    cout<<*pX1<<endl;
    *pX1 = 0;
    return 0;


    int* pX2 = NULL;
    cout<<pX2<<endl;
    cout<<*pX2<<endl;
    *pX2 = 0;
    return 0;
    //truy cap vào địa chỉ không bộ nhớ




    int* p = new int;
    int* p2 = p;
    *p = 10;
    cout << *p2 << endl;
    delete p;
    cout << *p2;
    //Giải phóng p làm cho p2 trở thành con trỏ vào vùng nhớ không xác định

}
