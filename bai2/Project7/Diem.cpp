#include "Diem.h"

// Hàm khởi tạo
Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >> iTung;
}

// Phương thức xuất tọa độ
void Diem::Xuat() const {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

// Phương thức Getter
int Diem::Getx() const { return iHoanh; }
int Diem::Gety() const { return iTung; }

// Phương thức Setter
void Diem::Sety(int Tung) { iTung = Tung; }
void Diem::Setx(int Hoanh) { iHoanh = Hoanh; }

// Phương thức tịnh tiến 
void Diem::TinhTien(int dx, int dy) {
    iHoanh += dx;
    iTung += dy;
}

// Phương thức quay
void Diem::Quay(double GocQuay) {
    double rad = GocQuay * 3.14 / 180.0; // Chuyển đổi độ sang radian
    int xNew = iHoanh * cos(rad) - iTung * sin(rad);
    int yNew = iHoanh * sin(rad) + iTung * cos(rad);
    iHoanh = xNew;
    iTung = yNew;
}
