#include<bits/stdc++.h>
using namespace std;

int Substring(const char* str, const char* substr) {
    int res = 0;
    int strs = strlen(str);
    int substrs = strlen(substr);
    for (int i = 0;i<=strs-substrs;i++) if (strncmp(str + i, substr, len_substr) == 0) res++;
    return res;
}

int main(int argc, char* argv[]) {
    const char* s1 = argv[1];
    const char* s2 = argv[2];
    cout<<Substring(s2, s1);
    return 0;
}
