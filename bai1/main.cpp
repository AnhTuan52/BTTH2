#include <iostream>
#include "Diem.h"

int main() {
    // Khởi tạo đối tượng điểm bằng phương thức mặc định
    Diem d1;
    cout << "Diem d1: ";
    d1.Xuat();

    // Khởi tạo đối tượng điểm bằng phương thức có tham số
    Diem d2(3, 4);
    cout << "Diem d2: ";
    d2.Xuat();

    // Sử dụng phương thức getter
    cout << "Hoanh do d2: " << d2.GetHoanhDo() << endl;
    cout << "Tung do d2: " << d2.GetTungDo() << endl;

    // Thay đổi giá trị tọa độ bằng setter
    d2.SetHoanhDo(10);
    d2.SetTungDo(15);
    cout << "Diem d2 sau khi thay doi: ";
    d2.Xuat();

    // Tinh tien diem d2
    d2.TinhTien(5, -3);
    cout << "Diem d2 sau khi tinh tien: ";
    d2.Xuat();

    // Khởi tạo đối tượng điểm bằng phương thức sao chép
    Diem d3(d2);
    cout << "Diem d3 (sao chep tu d2): ";
    d3.Xuat();

    return 0;
}