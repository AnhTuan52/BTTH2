// main.cpp
#include <iostream>
#include "TamGiac.h"

using namespace std;

int main() {
    TamGiac tamGiac;

    tamGiac.Nhap(); // Nhập tọa độ tam giác

    float goc, doDai;
    cout << "Nhap goc tinh tien va do dai: ";
    cin >> goc >> doDai;

    tamGiac.TinhTien(goc, doDai); // Thực hiện tịnh tiến

    cout << "Toa do 3 diem sau khi tinh tien:" << endl;
    tamGiac.Xuat(); // Xuất thông tin tam giác

    return 0;
}
