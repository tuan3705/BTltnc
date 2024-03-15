#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
int c[8]={-1,0,1,1,1,0,-1,-1};
int h[8]={-1,-1,-1,0,1,1,1,0};
int dmin(int x,int y)
{
    int ans=0;
    for(int i=0;i<8;i++)
    {
       if(a[x+h[i]][y+c[i]]=='*') ans++;
    }
    return ans;
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]=='*') cout<<a[i][j]<<" ";
            else cout<<dmin(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
