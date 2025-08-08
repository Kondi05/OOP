#include <iostream>
#include <string>
#include <algorithm> // For reverse()

void print_binary_str(std::string decimal_number) {
    int num = stoi(decimal_number); // Convert string to integer
    std::string binary_str;

    if (num == 0) {
        binary_str = "0";
    } else {
        while (num > 0) {
            binary_str += (num % 2) ? '1' : '0'; // Append remainder (0 or 1)
            num /= 2;
        }
        reverse(binary_str.begin(), binary_str.end()); // Reverse to get correct order
    }

    std::cout << binary_str << std::endl;
}