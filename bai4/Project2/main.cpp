
#include <iostream>
#include "ThiSinh.h"

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;

    ThiSinh* DanhSach = new ThiSinh[n]; // Tạo mảng thí sinh

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin cho thi sinh " << (i + 1) << ":" << endl;
        DanhSach[i].Nhap();
    }

    cout << "\nDanh sach thi sinh co tong lon hon 15:\n";
    for (int i = 0; i < n; i++) {
        if (DanhSach[i].Tong() > 15) 
          {
             DanhSach[i].Xuat();
             cout << endl;
          }
    }
    cout << "\nThi sinh cao diem nhat:\n";
    int vitrimax = -1;
    int giatrimax = -1;
    for (int i = 1; i < n; i++) {
        if (DanhSach[i].Tong() > giatrimax) {
            vitrimax=i;
            giatrimax = DanhSach[i].Tong();
        }
    }
    DanhSach[vitrimax].SetMSSV("23521713");
    DanhSach[vitrimax].Xuat();

    delete[] DanhSach; // Giải phóng bộ nhớ
    return 0;
}
