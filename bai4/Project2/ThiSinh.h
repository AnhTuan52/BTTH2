
#ifndef THISINH_H
#define THISINH_H

#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten;          // Tên thí sinh
    string MSSV;        // Mã số sinh viên
    int Ngay, Thang, Nam; // Ngày sinh
    float Toan;            // Điểm Toán
    float Van;           // Điểm Văn
    float Anh;           // Điểm Anh

public:
    ThiSinh();          
    void Nhap();        // Nhập thông tin
    void Xuat();        // Xuất thông tin
    float Tong();       // Tính tổng điểm
    void SetMSSV(const string& MSSV);
    
};

#endif // THISINH_H
