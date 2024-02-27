#include<bits/stdc++.h>
using namespace std;
int x,tmp;
int main()
{
    cin>>tmp;
    while(tmp>0)
    {
        if(x!=tmp)
        {
            x=tmp;
            cout<<x<<" ";
        }
        else
        {
            cin>>tmp;
        }
    }
    cout<<tmp;
}
