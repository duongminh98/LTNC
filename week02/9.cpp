#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int res1=*min_element(a+1,a+n+1);
    int res2=*min_element(b+1,b+n+1);
    cout<<res1*res2;

}
