#include <iostream>
#include "Dagiac.h"

int main() {
    int n;
    std::cout << "Nhap so dinh cua da giac (n > 2): ";
    std::cin >> n;

    if (n <= 2) return 1; // kiểm tra số đỉnh hợp lệ

    Dagiac Dagiac(n);
    Dagiac.Nhap(); // nhập tọa độ các điểm

    std::cout << "Dien tich da giac: " << Dagiac.TinhDienTich() << std::endl; // tính và xuất diện tích
    return 0;   
}
