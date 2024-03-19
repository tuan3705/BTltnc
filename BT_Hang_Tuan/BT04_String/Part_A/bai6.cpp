#include<bits/stdc++.h>
using namespace std;
int a[31];
void BubleSort(int a[],int n)
{
    for(int i=1;i<n;i++)
        for(int j=1;j<=n-i-1;j++)
           if(a[j]>a[j+1]) swap(a[j+1],a[j]);
}
int main()
{
    srand(time(0));
    for(int i=1;i<=30;i++)
    {
        a[i]=rand()%200;
    }
    for(int i=1;i<=30;i++) cout<<a[i]<<" ";
    cout<<endl;
    BubleSort(a,30);
    for(int i=1;i<=30;i++) cout<<a[i]<<" ";

}
