#include <bits/stdc++.h>
using namespace std;
bool isPrime (int n) {
    if (n==1) return 0;
    if (n==2 or n==3)return 1;
    for (int i=2;i<=sqrt(n);i++)
    {
    if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    for (int i = 2; i < n; i++) if (isPrime(i)) cout << i << " ";
    return 0;
}
