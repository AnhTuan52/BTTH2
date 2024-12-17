#ifndef Dagiac_H
#define Dagiac_H

#include "Diem.h"

class Dagiac {
    int n; // số đỉnh
    Diem* points; // mảng các điểm

public:
    Dagiac(int n);
    ~Dagiac();

    void Nhap();
    float TinhDienTich();
};

#endif // POLYGON_H
