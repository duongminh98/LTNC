#include <bits/stdc++.h>
using namespace std;
int a[10005],d[10005];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        d[a[i]++];
    }
    for(int i=1;i<=n;i++)
    {
        if(d[i]>=2){cout<<"Yes";return 0;}
    }
    cout << "No";
    return 0;
}
