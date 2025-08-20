#include <iostream>

int *readNumbers();
bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
    std::cout << "Enter first array (10 numbers): ";
    int *numbers1 = readNumbers();
    
    std::cout << "Enter second array (10 numbers): ";
    int *numbers2 = readNumbers();
    
    bool result = equalsArray(numbers1, numbers2, 10);
    std::cout << (result ? "true" : "false") << std::endl;
    
    delete[] numbers1;
    delete[] numbers2;
    return 0;
}