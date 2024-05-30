#include<bits/stdc++.h>
using namespace std;
int a[1005];
int res(int n)
{
    int result=0;
    for(int i=1;i<=n;i++)
    {
        result=max(result,a[i]+res(n-i));
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cout<<res(n);
}
