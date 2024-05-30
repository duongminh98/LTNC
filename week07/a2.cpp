#include <bits/stdc++.h>
using namespace std;
int A[] = {1, 2, 3, 4, 5};
void print(int* arr, int size) {
    cout<<sizeof(arr)<<endl;
    cout<<size<<endl;
}
template <size_t N>
void f(int (&arr)[N]) {
    cout << "Kich thuoc cua mang trong ham f: " << sizeof(arr) << " bytes" << endl;
    cout << "So phan tu cua mang trong ham f: " << N << endl;
}

int main() {

    cout << sizeof(A)  << endl;
    cout << sizeof(A) / sizeof(A[0]) << endl;
    f(A);
    print(A, sizeof(A) / sizeof(A[0]));
    return 0;
}
