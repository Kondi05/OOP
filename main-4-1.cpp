#include <iostream>

int *readNumbers();
int secondSmallestSum(int *numbers, int length);

int main() {
    std::cout << "Enter array (10 numbers): ";
    int *numbers = readNumbers();
    
    int result = secondSmallestSum(numbers, 10);
    std::cout << "Second smallest sum: " << result << std::endl;
    
    delete[] numbers;
    return 0;
}