#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int tmp=(i+j-1)%n;
            if(tmp) cout<<tmp<<" ";
            else cout<<n<<" ";
        }
        cout<<endl;
    }
}
