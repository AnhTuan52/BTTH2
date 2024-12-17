#include <iostream>
#include "TamGiac.h"

using namespace std;

int main() {
    Tamgiac tg;
    cout << "Nhap toa do cac dinh tam giac:\n";
    tg.Nhap();

    cout << "\nToa do tam giac sau khi nhap:\n";
    tg.Xuat();

    tg.TinhTien();
    cout << "\nTam giac sau khi tinh tien:\n";
    tg.Xuat();

    tg.PhongTo();
    cout << "\nTam giac sau khi phong to:\n";
    tg.Xuat();

    tg.Quay();
    cout << "\nTam giac sau khi quay:\n";
    tg.Xuat();

    return 0;
}
