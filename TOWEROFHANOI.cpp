#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int f[70][70],check[70][70];
int stewart(int n,int r)
{
    if(check[n][r]==1)return f[n][r];
    f[n][r]=INT_MAX;
    if(r==3)
    {
        f[n][r]=2*stewart(n-1,r)+1;
        check[n][r]=1;
        return f[n][r];
    }
	for(int i=0;i<n;i++)
	{

		f[n][r]=min(f[n][r],2*stewart(i,r)+stewart(n-i,r-1));
	}
	check[n][r]=1;
	return f[n][r];
}
signed main()
{
	int n,m;
	for(int i=3;i<=64;i++)
    {
        f[0][i]=0;
        check[0][i]=1;
        f[1][i]=1;
        check[1][i]=1;
    }
    m=stewart(64,64);
	while(cin>>n>>m)
    {
        cout<<f[n][m]<<endl;
    }
}
