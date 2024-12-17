#include <iostream>
#include <cmath>
#include "Dagiac.h"

Dagiac::Dagiac(int n) : n(n), points(new Diem[n]) {}

Dagiac::~Dagiac() {
    delete[] points;
}

void Dagiac::Nhap() {
    for (int i = 0; i < n; i++)
        std::cin >> points[i].x >> points[i].y;
}

float Dagiac::TinhDienTich() {
    float area = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += points[i].x * points[j].y - points[j].x * points[i].y;
    }
    return std::abs(area) / 2;
}
