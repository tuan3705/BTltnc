#include<bits/stdc++.h>
using namespace std;
long long n;
bool Prime(long long x)
{
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(Prime(i)) cout<<i<<" ";
    }
}
