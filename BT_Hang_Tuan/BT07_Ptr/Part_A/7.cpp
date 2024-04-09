#include<bits/stdc++.h>
using namespace std;
int cnt(const char *x,const char *y)
{
    int ans = 0;
    for(int i = 0; i<= strlen(y)-strlen(x);i++)
    {
        if (strncmp(x,y+i,strlen(x)) == 0) {
            ans++;
        }
    }
    return ans;
}
int main()
{
    string x,y;
    cin>>x>>y;
    cout<<cnt(x.c_str(),y.c_str());
}
