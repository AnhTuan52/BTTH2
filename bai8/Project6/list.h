#ifndef LIST_H
#define LIST_H

class List {
private:
    double* arr;        // Con trỏ quản lý mảng
    unsigned int size;  // Kích thước mảng

public:
    List();             // Hàm khởi tạo
    ~List();            // Hàm hủy
    void them(double x); // Thêm phần tử
    void xoaDau(double x); // Xóa phần tử đầu tiên có giá trị x
    void xoaTatCa(double x); // Xóa tất cả phần tử có giá trị x
    void capNhat(unsigned int index, double value); // Cập nhật phần tử
    void in() const;     // In ra danh sách
};

#endif
