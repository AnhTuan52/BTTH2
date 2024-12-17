// Diem.cpp
#include <iostream>
#include "Diem.h"

using namespace std;

Diem::Diem() : HoanhDo(0), TungDo(0) {}

void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> HoanhDo;
    cout << "Nhap tung do: ";
    cin >> TungDo;
}

void Diem::XuLyChiThi(int x) {
    if (x == 1)
    {
        Nhandoi();

    }
    if (x == 2)
         GanVeGoc();
    if( x==3)
        {
           int k;
           float d;
           cout << "Nhap huong tinh tien (k): ";
           cin >> k;
           cout << "Nhap do tinh tien (d): ";
           cin >> d;
           TinhTien(k, d);
        }
            
}

void Diem::Nhandoi() {
    HoanhDo *= 2;
    TungDo *= 2;
}

void Diem::GanVeGoc() {
    HoanhDo = 0;
    TungDo = 0;
}

void Diem::TinhTien(int k, float d) {
    if (k == 0) {
        HoanhDo += d; // Tịnh tiến theo trục x
    }
    else {
        TungDo += d; // Tịnh tiến theo trục y
    }
}

void Diem::Xuat() {
    cout << "(" << HoanhDo << "," << TungDo << ")" << endl;
}
