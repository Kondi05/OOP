#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number);

int main() {
    print_binary_str("789");  // Output: 1100010101
    print_binary_str("0");    // Output: 0
    print_binary_str("123");  // Output: 1111011
    return 0;
}