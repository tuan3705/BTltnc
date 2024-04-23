#include <bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b)
{
    int len=strlen(a) + strlen(b) + 1;
    char* ans=new char[len];
    strcpy(ans, a);
    strcat(ans, b);
    return ans;
}

int main()
{
    cout<<concat("hello","world");
}
