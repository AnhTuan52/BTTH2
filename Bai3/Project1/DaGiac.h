// DaGiac.h
#ifndef DAGIAC_H
#define DAGIAC_H

#include "Diem.h"

class DaGiac {
private:
    int SoDinh;
    Diem* DanhSach; 

public:
    DaGiac(); // Constructor
    ~DaGiac(); // Destructor
    void Nhap();
    void Xuat();
    void TinhTien();
    void PhongTo();
    void ThuNho();
    void Quay();
};

#endif // DAGIAC_H
