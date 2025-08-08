#include <iostream>

int sum_if_palindrome(int integers[], int length);
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);

int main() {
    // Test cases
    int palindrome[] = {1, 2, 2, 1};
    int not_palindrome[] = {1, 2, 3, 4};
    int empty[] = {};

    std::cout << sum_if_palindrome(palindrome, 4) << std::endl;    // Output: 6 (sum)
    std::cout << sum_if_palindrome(not_palindrome, 4) << std::endl; // Output: -2
    std::cout << sum_if_palindrome(empty, 0) << std::endl;          // Output: -1

    return 0;
}