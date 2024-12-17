
#include <iostream>
#include "ThiSinh.h"

using namespace std;

ThiSinh::ThiSinh() : Ten(""), MSSV(""), Ngay(0), Thang(0), Nam(0), Toan(0), Van(0), Anh(0) {}

void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    cin.ignore(); // Xóa bỏ ký tự newline còn lại trong buffer
    getline(cin, Ten);
    cout << "Nhap ma so sinh vien: ";
    cin >> MSSV;
    cout << "Nhap ngay sinh (ngay thang nam): ";
    cin >> Ngay >> Thang >> Nam;
    cout << "Nhap diem Toan: ";
    cin >> Toan;
    cout << "Nhap diem Van: ";
    cin >> Van;
    cout << "Nhap diem Anh: ";
    cin >> Anh;
}

void ThiSinh::Xuat() {
    cout << "Ten thi sinh: " << Ten << endl;
    cout << "Ma so sinh vien: " << MSSV << endl;
    cout << "Ngay sinh: " << Ngay << "/" << Thang << "/" << Nam << endl;
    cout << "Diem Toan: " << Toan << endl;
    cout << "Diem Van: " << Van << endl;
    cout << "Diem Anh: " << Anh << endl;
    cout << "Tong diem: " << Tong() << endl;
}

float ThiSinh::Tong() {
    return Toan + Van + Anh;
}
void ThiSinh :: SetMSSV(const string&   MSSV)
{
    this ->MSSV =MSSV;
}
