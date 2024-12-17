// Diem.h
#ifndef DIEM_H
#define DIEM_H

class Diem {
private:
    float HoanhDo; // Hoành độ
    float TungDo;  // Tung độ

public:
    Diem();                          // Constructor
    void Nhap();                     // Nhập thông tin điểm
    void XuLyChiThi(int x);          // Xử lý chỉ thị
    void Xuat();                     // Xuất thông tin điểm
    void Nhandoi();                  // Nhân đôi tọa độ
    void GanVeGoc();                  // Gán điểm về gốc tọa độ
    void TinhTien(int k, float d);   // Tịnh tiến điểm
};

#endif // DIEM_H
