#include <bits/stdc++.h>
using namespace std;
int binSearch(int *a, int n, int k) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (r+l)/2;
        if (a[mid] == k)
            return mid;
        if (a[mid] > k)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main() {
    int a[] = {3,4,5,6,7,8,9};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 4;
    int ans = binSearch(a, n, k);
    cout<<ans<<endl; // 1
    return 0;
}
