#include <bits/stdc++.h>
using namespace std;
int count_even(int* a, int n) {
    int cnt = 0;
    for (int i=0;i<n;i++) {
        if (a[i] % 2 == 0) {
            cnt++;
        }
    }
    return cnt;
}
int main() {
    int a[10] = {4,8,5,7,9,2,4,8,9,4};
    cout<<count_even(a, 5) << endl; //2
    cout<<count_even(a + 5, 5) << endl; //4
    return 0;
}
