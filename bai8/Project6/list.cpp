#include <iostream>
#include "List.h"

using namespace std;

List::List() : arr(nullptr), size(0) {}

List::~List() {
    delete[] arr;
}

void List::them(double x) {
    double* newArr = new double[size + 1];
    for (unsigned int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    newArr[size] = x;
    delete[] arr;
    arr = newArr;
    size++;
}

void List::xoaDau(double x) {
    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] == x) {
            for (unsigned int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
        }
    }
}

void List::xoaTatCa(double x) {
    double* newArr = new double[size];
    unsigned int newSize = 0;

    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] != x) {
            newArr[newSize++] = arr[i];
        }
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
}

void List::capNhat(unsigned int index, double value) {
    if (index < size) {
        arr[index] = value;
    }
}

void List::in() const {
    cout << "[";
    for (unsigned int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ",";
    }
    cout << "]" << endl;
}
