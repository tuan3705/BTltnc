#include<bits/stdc++.h>
using namespace std;
map<int,int> cnt;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int tmp;
        cin>>tmp;
        if(cnt[tmp]) {cout<<"Yes";return 0;}
        else cnt[tmp]++;
    }
    cout<<"No";
    return 0;
}
