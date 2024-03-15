#include<bits/stdc++.h>
using namespace std;
int t;
int a,b;
int pad[100001];
bool check(int x)
{
    int tmp=x;
    int tmp2=0;
    while(x)
    {
        tmp2=tmp2*10+x%10;
        x/=10;
    }
    return tmp2==tmp;
}
void build()
{
    pad[-1]=0;
    for(int i=0;i<=100000;i++)
    {
        if(check(i)) pad[i]++;
    }
    for(int i=1;i<=100000;i++) pad[i]+=pad[i-1];
}
int main()
{
    build();
    cin>>t;
    while(t)
    {
        t--;
        cin>>a>>b;
        cout<<pad[b]-pad[a-1]<<endl;
    }
}
