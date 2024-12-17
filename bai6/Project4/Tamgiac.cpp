// TamGiac.cpp
#include <iostream>
#include <cmath>
#include "TamGiac.h"

#define PI 3.14

using namespace std;

TamGiac::TamGiac() : x1(0), y1(0), x2(0), y2(0), x3(0), y3(0) {}

void TamGiac::Nhap() {
    cout << "Nhap toa do 3 diem (x1, y1, x2, y2, x3, y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}

void TamGiac::TinhTien(float goc, float doDai) {
    float radian = goc * (PI / 180);

    // Tính toán biến thiên theo phương x và y
    float deltaX = doDai * cos(radian);
    float deltaY = doDai * sin(radian);

    // Tịnh tiến các điểm
    x1 += deltaX;
    y1 += deltaY;
    x2 += deltaX;
    y2 += deltaY;
    x3 += deltaX;
    y3 += deltaY;
}

void TamGiac::Xuat() {
    cout << "(" << x1 << "," << y1 << ")" << endl;
    cout << "(" << x2 << "," << y2 << ")" << endl;
    cout << "(" << x3 << "," << y3 << ")" << endl;
}
