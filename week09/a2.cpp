#include <bits/stdc++.h>
using namespace std;
int main() {
  int* p = new int;
  int* p2 = p;
  *p = 10;
  delete p;
  *p2 = 100; // Lỗi: truy cập bộ nhớ đã được giải phóng (use-after-free)
  cout << *p2;
  delete p2; // Lỗi: xóa bộ nhớ đã được giải phóng (double-free)
  return 0;
}
