#include <bits/stdc++.h>
using namespace std;
int main() {
  char* a = new char[10];
  char* c = a + 3;
  for (int i = 0; i < 9; i++) a[i] = 'a';
  a[9] = '\0';
  cerr <<"a: " << "-" << a << "-" << endl; // In ra a: --------
  cerr <<"c: " << "-" << c << "-" << endl; // In ra c: ---aaa---
  delete c; // Lỗi: xóa bộ nhớ không được cấp phát (invalid pointer)
  cerr << "a after deleting c:" << "-" << a << "-" << endl; // Không được in ra do chương trình bị crash
  return 0;
}
