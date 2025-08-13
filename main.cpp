#include "workshop.h"

int main() {
    // Part 2 test
    double val = 3.14;
    changeValue(&val);
    std::cout << "val after changeValue: " << val << "\n"; // Expect 42

    // Part 3 & 4 test
    double arr[] = {1.0, 5.2, 3.3, 4.4};
    printArray(arr, 4);
    std::cout << "Max: " << arrayMax(arr, 4) << "\n"; // Expect 5.2

    // Part 7 & 8 test
    int n = 5;
    double m = 7.7;
    double* dynArr = dynamicArray(n, m);
    printArray(dynArr, n);
    std::cout << "Max of dynamic: " << arrayMax(dynArr, n) << "\n"; // Expect 7.7
    delete[] dynArr;

    return 0;
}