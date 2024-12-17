// main.cpp
#include <iostream>
#include "DaGiac.h"

using namespace std;

int main() {
    DaGiac daGiac;

    daGiac.Nhap();
    daGiac.Xuat();

    daGiac.TinhTien();
    cout << "Da giac sau khi tinh tien: " << endl;
    daGiac.Xuat();

    daGiac.PhongTo();
    cout << "Da giac sau khi phong to: " << endl;
    daGiac.Xuat();

    daGiac.ThuNho();
    cout << "Da giac sau khi thu nho: " << endl;
    daGiac.Xuat();

    daGiac.Quay();
    cout << "Da giac sau khi quay: " << endl;
    daGiac.Xuat();

    return 0;
}
