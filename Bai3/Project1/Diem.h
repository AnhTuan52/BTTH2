// Diem.h
#ifndef DIEM_H
#define DIEM_H

class Diem {
private:
    double x, y;

public:
    Diem(); 
    void Nhap();
    void Xuat();
    void TinhTien(double dx, double dy);
    void Quay(double goc);
    double GetHoanhDo();
    double GetTungDo();
    void CaiDatDiem(double x, double y);
};

#endif // DIEM_H
