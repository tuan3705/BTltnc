#include<bits/stdc++.h>
using namespace std;
void print(char arr[2][12])
{
    for(int i=0;i<2;i++){
        for(int j=0;j<12;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{

    char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
      };
    char daytab2[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
     };
   char daytab3[2][12] = {
  {31,28,31,30,31,30,31,31,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
    };
   char daytab4[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,31,30,31,31,30,31,30,31
    };
   char daytab5[][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
   };
  char daytab6[][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
   };
//  char daytab7[2][] = {
//  {31,28,31,30,31,30,31,31,30,31,30,31},as multidimensional array must have bounds for all dimensions except the first|
//  {31,29,31,30,31,30,31,31,30,31,30,31}
//   };
//  char daytab8[2][] = {
//  31,28,31,30,31,30,31,31,30,31,30,31,as multidimensional array must have bounds for all dimensions except the first|
//  31,29,31,30,31,30,31,31,30,31,30,31
//  };
//  char daytab9[][] = {
//  {31,28,31,30,31,30,31,31,30,31,30,31},
//  {31,29,31,30,31,30,31,31,30,31,30,31}as multidimensional array must have bounds for all dimensions except the first|
//  };
//  char daytab10[][] = {
//  31,28,31,30,31,30,31,31,30,31,30,31,as multidimensional array must have bounds for all dimensions except the first|
//  31,29,31,30,31,30,31,31,30,31,30,31
//   };
   print(daytab1);
   print(daytab2);
   print(daytab3);
   print(daytab4);
   print(daytab5);
   print(daytab6);
   return 0;
}
