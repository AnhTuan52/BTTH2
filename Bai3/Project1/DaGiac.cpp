
#include <iostream>
#include "DaGiac.h"
#include <cmath>

using namespace std;

DaGiac::DaGiac() : DanhSach(nullptr), SoDinh(0) {}
DaGiac::~DaGiac() {
    delete[] DanhSach;
}

void DaGiac::Nhap() {
    do {
        cout << "Nhap so dinh cua da giac: ";
        cin >> SoDinh;
        if (SoDinh < 3) {
            cout << "So dinh nhap vao khong hop le. Vui long nhap lai!" << endl;
        }
    } while (SoDinh < 3);

    DanhSach = new Diem[SoDinh]; // Cấp phát bộ nhớ cho mảng DanhSach
    for (int i = 0; i < SoDinh; i++) {
        cout << "Nhap du lieu dinh thu " << (i + 1) << endl; 
        DanhSach[i].Nhap();
    }
}

void DaGiac::Xuat() {
    for (int i = 0; i < SoDinh; i++) {
        cout << "Toa do dinh thu " << (i + 1) << " la: "<< endl; 
        DanhSach[i].Xuat();
        cout << endl;
    }
}

void DaGiac::TinhTien() {
    cout << "Nhap vecto tinh tien" << endl;
    double X, Y;
    cout << "Nhap hoanh do: ";
    cin >> X;
    cout << "Nhap tung do: ";
    cin >> Y;

    for (int i = 0; i < SoDinh; i++) {
        DanhSach[i].TinhTien(X, Y);
    }
}
void DaGiac::Quay() {
    double GocQuay;
    cout << "Nhap vao goc quay: ";
    cin >> GocQuay;
    for (int i = 0; i < SoDinh; i++) {
        DanhSach[i].Quay(GocQuay);
    }
}

void DaGiac::PhongTo() {
    cout  << endl;
    double Phong;
    cout << "Nhap he so phong to: ";
    cin >> Phong;
    for (int i = 0; i < SoDinh; i++) {
        DanhSach[i].CaiDatDiem(DanhSach[i].GetHoanhDo() * Phong, DanhSach[i].GetTungDo() * Phong);
    }
}

void DaGiac::ThuNho() {
    cout << endl;
    double Thu;
    cout << "Nhap he so thu nho: ";
    cin >> Thu;
    for (int i = 0; i < SoDinh; i++) {
        DanhSach[i].CaiDatDiem(DanhSach[i].GetHoanhDo() * (1.0 / Thu), DanhSach[i].GetTungDo() * (1.0 / Thu));
    }
}
