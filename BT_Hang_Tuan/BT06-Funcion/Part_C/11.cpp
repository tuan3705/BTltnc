#include<bits/stdc++.h>
using namespace std;
long long BinToDem(string s)
{
    long long ans=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        ans+=(s[i]-'0')*pow(2,i);
    }
    return ans;
}
string DemToBin(long long x)
{
    string ans="";
    while(x)
    {
        ans+=char(x%2+'0');
        x/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<BinToDem(s)<<endl;
    long long x;
    cin>>x;
    cout<<DemToBin(x);
    return 0;
}
