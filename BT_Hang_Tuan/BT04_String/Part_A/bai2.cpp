#include<bits/stdc++.h>
using namespace std;
//char c1[]; unknow size
//char c2[3]="abcd"; innitializer-string for array of chars is too long
//char c3[4]="abcd";  innitializer-string for array of chars is too long
char c4[5]="abcd";
char c5[]="abcd";
void print(char c[])
{
    for(int i=0;i<strlen(c);i++) cout<<c[i];
    cout<<" "<<c<<endl;
}
int main()
{
 //char c6[]; unknow size
 //char c7[3]="abcd";  innitializer-string for array of chars is too long
 //char c8[4]="abcd";  innitializer-string for array of chars is too long
 char c9[5]="abcd";
 char c10[]="abcd";
 print(c4);
 print(c5);
 print(c9);
 print(c10);
 return 0;
}
