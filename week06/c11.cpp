#include <bits/stdc++.h>
using namespace std;
vector <int> res;
int main() {
    int n;
    cin >> n;
    while (n>0)
    {
        res.push_back(n%2);
        n/=2;
    }
    n=res.size();
    for (int i = n-1;i>=0;i--)
    cout << res[i];
    return 0;
}
