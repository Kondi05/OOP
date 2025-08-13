#ifndef WORKSHOP_H
#define WORKSHOP_H

#include <iostream>

// Part 2
inline void changeValue(double* p) {
    if (p) *p = 42;
}

// Part 3
inline void printArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i + 1 < size ? " " : "\n");
    }
}

// Part 4
inline double arrayMax(double* arr, int size) {
    if (!arr || size <= 0) return 0.0;
    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// Part 5 (variant, optional)
inline double* dynamicArray(int n) {
    if (n <= 0) return nullptr;
    double* arr = new double[n];
    for (int i = 0; i < n; ++i) arr[i] = i;
    return arr;
}

// Part 7
inline double* dynamicArray(int n, double m) {
    if (n <= 0) return nullptr;
    double* arr = new double[n];
    for (int i = 0; i < n; ++i) arr[i] = m;
    return arr;
}

#endif // WORKSHOP_H