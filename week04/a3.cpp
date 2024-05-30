#include<bits/stdc++.h>
using namespace std;
int main()
{
    char daytab_1[2][12] = {
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 },
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 }
    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<12;j++)
        {
            cout<<daytab_1[i][j]<<" ";
        }
        cout << endl;
    }
    char daytab_2[2][12] = {
         65, 66, 67, 68, 69, 70, 71, 72, 73 ,
         65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76
    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<12;j++)
        {
            cout<<daytab_2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
