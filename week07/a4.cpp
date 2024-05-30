#include <bits/stdc++.h>
using namespace std;
bool binary_search(int *a, int l, int r, int x) {
    while (l <= r) {
        int mid = (l + r)/2;
        if (a[mid] == x) return true;
        else if(a[mid]>x)r=mid-1;
        else l=mid+1;
    }
    return false;
}
