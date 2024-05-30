#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    double x=((n - 32)*5)/9;
    cout<<n<<fixed<<setprecision(2)<<" "<<x<<" "<<x+273.15;
    return 0;
}
