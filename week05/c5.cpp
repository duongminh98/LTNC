#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
    int n,m,ni,nj,mi,mj;
    cin>>n>>m;
    int q=1;
    ni=1;
    nj=n;
    mi=1;
    mj=m;
    while(q<=n*m)
    {
        if(ni==nj)
        {
             for(int j=mi;j<=mj;j++){
            a[ni][j]=q;
            q++;
        }
        break;
        }
        for(int j=mi;j<=mj;j++){
            a[ni][j]=q;
            q++;
        }
        ni++;
        if(mi==mj)
        {
            for(int i=ni;i<=nj;i++)
        {
            a[i][mj]=q;
            q++;
        }
        break;
        }
        for(int i=ni;i<=nj;i++)
        {
            a[i][mj]=q;
            q++;
        }
        mj--;
        for(int j=mj;j>=mi;j--)
        {
            a[nj][j]=q;
            q++;
        }
        nj--;
        for(int i=nj;i>=ni;i--)
        {
            a[i][mi]=q;
            q++;
        }
        mi++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
}
