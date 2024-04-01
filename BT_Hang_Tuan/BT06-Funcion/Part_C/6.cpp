#include<bits/stdc++.h>
using namespace std;
long long a,b;
long long GCD(long long x, long long y)
{
    if(x%y==0) return y;
    if(y%x==0) return x;
    while(x!=y && (x!=1 && y!=1))
    {
        if(x<y) y%=x;
        else x%=y;
    }
    return min(x,y);
}
int main()
{
    cin>>a>>b;
    if(GCD(a,b)==1) cout<<"a,b nguyen to cung nhau";
    else cout<<"khong nguyen to cung nhau";
    return 0;
}
