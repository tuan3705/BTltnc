#include <bits/stdc++.h>
using namespace std;
void print(int a[])
{
    cout<<sizeof(*a)<<endl;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int b[7] = {1,2,3};
    cout<<sizeof(a)<<endl;  //28
    print(a);           //4
    cout<<sizeof(b)<<endl;  //28
    print(b);           //4

}
