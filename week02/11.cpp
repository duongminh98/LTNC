#include <bits/stdc++.h>
using namespace std;
double MIN, MAX, step;
int main()
{
    cin>>MIN>>MAX>>step;
    for (double i=MIN;i<=MAX;i=i+step)
    {
        double x=((i - 32)*5)/9;
        cout<<i<<" "<<x<<" "<<x+273.15<<endl;
    }
    return 0;
}
