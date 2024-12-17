#include "TamGiac.h"
#include <iostream>

using namespace std;

// Hàm tạo mặc định
Tamgiac::Tamgiac() : A(0, 0), B(1, 0), C(0, 1) {}

// Hàm tạo với tham số
Tamgiac::Tamgiac(Diem a, Diem b, Diem c) : A(a), B(b), C(c) {}

// Nhập tọa độ các đỉnh
void Tamgiac::Nhap() {
    cout << "Nhap diem A:\n";
    A.Nhap();
    cout << "Nhap diem B:\n";
    B.Nhap();
    cout << "Nhap diem C:\n";
    C.Nhap();
}

// Xuất tọa độ các đỉnh
void Tamgiac::Xuat() const {
    cout << "Dinh A: "; A.Xuat();
    cout << "Dinh B: "; B.Xuat();
    cout << "Dinh C: "; C.Xuat();
}

// Phương thức tịnh tiến
void Tamgiac::TinhTien() {
    int dx, dy;
    cout << "Nhap dx: ";
    cin >> dx;
    cout << "Nhap dy: ";
    cin >> dy;
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

// Phương thức phóng to
void Tamgiac::PhongTo() {
    double scale;
    cout << "Nhap he so phong to: ";
    cin >> scale;
    A.Setx(A.Getx() * scale);
    A.Sety(A.Gety() * scale);
    B.Setx(B.Getx() * scale);
    B.Sety(B.Gety() * scale);
    C.Setx(C.Getx() * scale);
    C.Sety(C.Gety() * scale);
}

// Phương thức thu nhỏ
void Tamgiac::ThuNho() {
    double scale;
    cout << "Nhap he so thu nho: ";
    cin >> scale;
    A.Setx(A.Getx() / scale);
    A.Sety(A.Gety() / scale);
    B.Setx(B.Getx() / scale);
    B.Sety(B.Gety() / scale);
    C.Setx(C.Getx() / scale);
    C.Sety(C.Gety() / scale);
}

// Phương thức quay
void Tamgiac::Quay() {
    double goc;
    cout << "Nhap goc quay (do): ";
    cin >> goc;
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}
