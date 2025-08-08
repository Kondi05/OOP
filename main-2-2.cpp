#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary_array1[] = {1, 0, 1, 1}; // 1*(2^3) + 0*(2^2) + 1*(2^1) + 1*(2^0) = 11
    int size1 = 4;
    std::cout << binary_to_int(binary_array1, size1) << std::endl; // Output: 11

    int binary_array2[] = {1, 1, 1, 1, 0, 0, 0, 0}; // 240
    int size2 = 8;
    std::cout << binary_to_int(binary_array2, size2) << std::endl; // Output: 240

    return 0;
}