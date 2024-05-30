#include <iostream>
using namespace std;
int main() {
  int* p; // Khai báo con trỏ p
  { // Khởi tạo khối mã
    int x ; // Khai báo biến x là biến địa phương
    p = &x; // Gán địa chỉ của x cho con trỏ p
  } // Khối mã kết thúc, biến x bị hủy

  delete p; // Giải phóng con trỏ p

    cout<<*p; // Không in ra giá trị của x vì p đã bị giải phóng
//Việc truy cập *p sau khi p đã bị giải phóng là không hợp lệ và có thể dẫn đến lỗi use-after-free.
  return 0;
}
