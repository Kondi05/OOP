#include <iostream>
#include <algorithm>
#include <vector>

int *readNumbers() {
    int *array = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
    }
    return array;
}

int secondSmallestSum(int *numbers, int length) {
    if (length <= 1) return 0;
    
    std::vector<int> sums;
    
    // Generate all subarray sums
    for (int start = 0; start < length; start++) {
        int currentSum = 0;
        for (int end = start; end < length; end++) {
            currentSum += numbers[end];
            sums.push_back(currentSum);
        }
    }
    
    // Sort the sums
    std::sort(sums.begin(), sums.end());
    
    // Find the second smallest unique sum
    int smallest = sums[0];
    for (size_t i = 1; i < sums.size(); i++) {
        if (sums[i] != smallest) {
            return sums[i];
        }
    }
    
    // If all sums are equal, return the smallest
    return smallest;
}