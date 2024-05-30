#include <bits/stdc++.h>
using namespace std
bool kt(string S) {
    int l = S.size();
    for (int i = 0; i < l; i++) {
        if (S[i] != S[l-1-i])return 0;
        if (i == int(l/2)) {
            return 1;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    if(kt(s))cout<<"Yes";
    else cout<<"No";
    return 0;
}
