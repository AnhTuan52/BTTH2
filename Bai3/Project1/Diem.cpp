// Diem.cpp
#include <iostream>
#include "Diem.h"
#include <cmath>

using namespace std;

Diem::Diem() : x(0), y(0) {}

void Diem::Nhap() {
    cout << "Nhap toa do x: ";
    cin >> x ;
    cout << "Nhap toa do y: ";
    cin >> y;
    cout << endl;
}

void Diem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}

void Diem::TinhTien(double dx, double dy) {
    x += dx;
    y += dy;
}

void Diem::Quay(double goc) {
    double radian = goc * (3.14 / 180.0);
    double newX = x * cos(radian) - y * sin(radian);
    double newY = x * sin(radian) + y * cos(radian);
    x = newX;
    y = newY;
}

double Diem::GetHoanhDo() {
    return x;
}

double Diem::GetTungDo() {
    return y;
}

void Diem::CaiDatDiem(double x, double y) {
    this->x = x;
    this->y = y;
}
