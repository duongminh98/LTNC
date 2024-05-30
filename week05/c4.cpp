#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            char u;
            cin>>u;
            if(u=='*')a[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
    {
        if(a[i][j]==1)cout<<"*"<<" ";
        else
        {
            cout<<a[i-1][j]+a[i-1][j-1]+a[i+1][j+1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+a[i+1][j-1]+a[i-1][j+1]<<" ";
        }
    }
    cout<<endl;
        }
}

