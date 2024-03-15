#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    getline(cin,s);

    string x=s;
    reverse(s.begin(),s.end());
    if(s==x) cout<<"Yes";
    else cout<<"No";
    return 0;
}
