#ifndef DIEM_H
#define DIEM_H

#include <iostream>
#include <cmath>

using namespace std;

class Diem {
private:
    int iHoanh; // Hoành độ
    int iTung;  // Tung độ

public:
    Diem(int Hoang = 0, int Tung = 0);
    void Xuat() const;
    void Nhap();
    int Getx() const;
    int Gety() const;
    void Sety(int Tung);
    void Setx(int Hoanh);
    void TinhTien(int dx, int dy);
    void Quay(double GocQuay);
};

#endif // DIEM_H
