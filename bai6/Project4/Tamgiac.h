#ifndef TAMGIAC_H
#define TAMGIAC_H

class TamGiac {
private:
    float x1, y1; // Điểm A
    float x2, y2; // Điểm B
    float x3, y3; // Điểm C

public:
    TamGiac();                          // Constructor
    void Nhap();                        // Nhập tọa độ
    void TinhTien(float goc, float doDai); // Tịnh tiến tam giác
    void Xuat();                        // Xuất thông tin các điểm
};

#endif 
