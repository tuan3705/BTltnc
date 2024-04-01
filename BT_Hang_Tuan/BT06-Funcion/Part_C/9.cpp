#include<bits/stdc++.h>
using namespace std;
int randN(int n){
   return rand()%n;
}
int main()
{
    int n;
    cin>>n;
    srand(time(0));
    cout<<randN(n);

}
