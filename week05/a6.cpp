#include<bits/stdc++.h>
using namespace std;
int main()
{   int a[100];
    srand(time(NULL));
    for (int i=0;i<100;i++)
    {
        a[i]=rand()%100+1;
        cout<<a[i]<<" ";
    }
    cout << endl;
    for (int i=1;i<100;i++)
    {
        for (int j=1;j<100;j++)
        {
            if (a[j-1]>a[j]) swap(a[j - 1],a[j]);
        }
    }

    for (int i=0;i<100;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
