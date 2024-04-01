#include<bits/stdc++.h>
using namespace std;
int round1(double x)
{
    double z= x-int(x);
    if(z>=0.5) return ceil(x);
    else return floor(x);
}
int round2(double x)
{
    double z=x-int(x);
    if(z>=0.5) return int(x)+1;
    else return int(x);
}
int main()
{
    double n;
    cin>>n;
    cout<<round1(n)<<" "<<round2(n);
    return 0;
}
