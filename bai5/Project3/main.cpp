#include <iostream>
#include "Diem.h"

using namespace std;

int main() {
    Diem diem;
    diem.Nhap(); // Nhập điểm

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int chiThi;
        cout << "Nhap chi thi " << (i + 1) << ": ";
        cin >> chiThi;
        diem.XuLyChiThi(chiThi); // Xử lý từng chỉ thị
    }
    diem.Xuat();

    return 0;
}
