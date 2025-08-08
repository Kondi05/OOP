#include <iostream>

int sum_min_max(int integers[], int length);
int array_min(int integers[], int length);
int array_max(int integers[], int length);

int main() {
    int arr[] = {4, 2, 9, 5, 1};
    int size = 5;
    std::cout << sum_min_max(arr, size) << std::endl; // Output: 1 (min) + 9 (max) = 10

    int empty[] = {};
    std::cout << sum_min_max(empty, 0) << std::endl;  // Output: -1 (invalid length)
    return 0;
}