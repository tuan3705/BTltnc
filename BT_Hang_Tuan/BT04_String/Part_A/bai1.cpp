#include<bits/stdc++.h>
using namespace std;
//int a[];//unknow size
int c[5] = {1, 2, 3, 4};
//int d[3] = {1, 2, 3, 4} ; too many initializers
int g[] = {1, 2, 3, 4};
void print(int arr[], int size)
{
    for(int i=0;i<size;i++) cout<< arr[i] << " ";
    cout<<endl;
}
int main(){
//  int b[]; unknow size
  int e[5] = {1, 2, 3, 4};
//  int f[3] = {1, 2, 3, 4}; to many initializers
  int h[] = {1, 2, 3, 4};

 int sizeC=sizeof(c)/sizeof(c[0]);
 int sizeG=sizeof(g)/sizeof(g[0]);
 int sizeE=sizeof(e)/sizeof(e[0]);
 int sizeH=sizeof(h)/sizeof(h[0]);
 print(c,sizeC);
 print(g,sizeG);
 print(e,sizeE);
 print(h,sizeH);
 return 0;
}
