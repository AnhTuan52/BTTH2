#include <iostream>
#include "List.h"

using namespace std;

int main() {
    List danhSach;
    int n;

    while (true) {
        cout << "Nhap chi thi (-1: thoat, 0: them, 1: xoa dau, 2: xoa tat ca, 3: cap nhat): ";
        cin >> n;

        if (n == -1) break;

        if (n == 0) {
            double x;
            cout << "Nhap gia tri can them: ";
            cin >> x;
            danhSach.them(x);
        }
        else if (n == 1) {
            double x;
            cout << "Nhap gia tri can xoa: ";
            cin >> x;
            danhSach.xoaDau(x);
        }
        else if (n == 2) {
            double x;
            cout << "Nhap gia tri can xoa tat ca: ";
            cin >> x;
            danhSach.xoaTatCa(x);
        }
        else if (n == 3) {
            unsigned int index;
            double value;
            cout << "Nhap chi so va gia tri moi (index value): ";
            cin >> index >> value;
            danhSach.capNhat(index, value);
        }

        danhSach.in(); // In ra danh sách hiện tại
    }

    return 0;
}
