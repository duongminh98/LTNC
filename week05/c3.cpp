#include <bits/stdc++.h>
using namespace std;
bool kiemtra(string S) {

    int l=S.length();
    for (int i=0; i<l+1; i++)
    {
        char x1=S[i], x2=S[l-1-i];
        if (x1!=x2)return 0;
        if (i==int(l/2))return 1;
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        int res=0;
        for (int i=a;i<=b;i++)
        {
            string s=to_string(i);
            if(kiemtra(s)) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
