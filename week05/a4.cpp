#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]={65, 66, 67};
    cout<<arr[-1]<<endl;
    arr[-1]=1;
    cout<<arr[-1]<<endl;
    char a[3][4] ;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=5;j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }

    return 0;
}
