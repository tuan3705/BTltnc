#include<bits/stdc++.h>
using namespace std;
int a[1000000],n;
void randARR(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        arr[i]=rand()%50;
    }
}
void sum3(int arr[],int n)
{
    for(int i=1;i<=n-2;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
                if((arr[i]+arr[j]+arr[k])%25==0) cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
    }
}
int main()
{
    srand(time(0));
    cin>>n;
    randARR(a,n);
    cout<<"ARR: ";
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl<<"sum of 3 number % 25 = 0:"<<endl;
    sum3(a,n);
    return 0;
}
