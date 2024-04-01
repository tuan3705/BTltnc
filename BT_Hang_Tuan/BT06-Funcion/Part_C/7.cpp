#include<bits/stdc++.h>
using namespace std;
int t;
void printf(int m,int n)
{
    for(int i=1;i<=m;i++) cout<<" ";
    for(int i=1;i<=n;i++) cout<<"*";
    cout<<endl;
}
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        printf(t-i,i*2-1);
    }
    return 0;
}
