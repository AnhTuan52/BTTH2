#ifndef TAMGIAC_H
#define TAMGIAC_H

#include "Diem.h"

class Tamgiac {
private:
    Diem A, B, C;

public:
    Tamgiac();
    Tamgiac(Diem a, Diem b, Diem c);

    void Nhap();
    void Xuat() const;
    void TinhTien();
    void PhongTo();
    void ThuNho();
    void Quay();
};

#endif // TAMGIAC_H
