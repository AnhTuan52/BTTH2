#include "Diem.h"
    // Phương thức khởi tạo mặc định
Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
}

    // Phương thức khởi tạo có tham số
Diem::Diem(int Hoanh, int Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

    // Phương thức khởi tạo sao chép
Diem::Diem(const Diem &x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

    // Phương thức xuất giá trị của điểm
void Diem::Xuat() const {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

    // Get cho tọa độ tung
int Diem::GetTungDo() const {
    return iTung;
}

    // Get cho tọa độ hoành
int Diem::GetHoanhDo() const {
    return iHoanh;
}

    // Set cho tọa độ tung
void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

    // Set cho tọa độ hoành
void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

    // Phương thức tính tiền điểm theo dx và dy
void Diem::TinhTien(int dx, int dy) {
    iHoanh += dx;
    iTung += dy;
}
