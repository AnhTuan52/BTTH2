#ifndef DIEM_H
#define DIEM_H
#include <iostream>
using namespace std;

class Diem {
private:
    int iHoanh;
    int iTung;

public:
    // Phương thức khởi tạo mặc định
    Diem();

    // Phương thức khởi tạo có tham số
    Diem(int Hoanh, int Tung);

    // Phương thức khởi tạo sao chép
    Diem(const Diem &x);

    // Phương thức xuất giá trị của điểm
    void Xuat() const;

    // Getter cho tọa độ tung
    int GetTungDo() const;

    // Getter cho tọa độ hoành
    int GetHoanhDo() const;

    // Setter cho tọa độ tung
    void SetTungDo(int Tung);

    // Setter cho tọa độ hoành
    void SetHoanhDo(int Hoanh);

    // Phương thức tính tiền điểm theo dx và dy
    void TinhTien(int dx, int dy);
};

#endif
