#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>
using namespace std;

// Convert binary string to decimal
int binaryToDecimal(const string& binary) {
    return stoi(binary, nullptr, 2);
}

// Convert decimal to binary string
string decimalToBinary(int number) {
    if (number == 0) return "0";
    string result = "";
    while (number > 0) {
        result = to_string(number % 2) + result;
        number /= 2;
    }
    return result;
}

// Add two binary numbers
string binaryAdd(const string& a, const string& b) {
    int sum = binaryToDecimal(a) + binaryToDecimal(b);
    return decimalToBinary(sum);
}

// Subtract two binary numbers
string binarySubtract(const string& a, const string& b) {
    int result = binaryToDecimal(a) - binaryToDecimal(b);
    return decimalToBinary(result);
}

// Shift binary left
string shiftLeft(const string& a) {
    int shifted = binaryToDecimal(a) << 1;
    return decimalToBinary(shifted);
}

// Shift binary right
string shiftRight(const string& a) {
    int shifted = binaryToDecimal(a) >> 1;
    return decimalToBinary(shifted);
}

int main() {
    string bin1 = "111011101011";
    string bin2 = "1";
    string bin3 = "1110101";

    cout << "Binary 1: " << bin1 << " (" << binaryToDecimal(bin1) << ")\n";
    cout << "Binary 2: " << bin2 << " (" << binaryToDecimal(bin2) << ")\n";

    // Addition
    cout << "\n[Addition]\n";
    cout << bin1 << " + " << bin2 << " = " << binaryAdd(bin1, bin2)
         << " (" << binaryToDecimal(binaryAdd(bin1, bin2)) << ")\n";
    cout << bin1 << " + " << bin1 << " = " << binaryAdd(bin1, bin1)
         << " (" << binaryToDecimal(binaryAdd(bin1, bin1)) << ")\n";

    // Subtraction
    cout << "\n[Subtraction]\n";
    cout << bin1 << " - " << bin2 << " = " << binarySubtract(bin1, bin2)
         << " (" << binaryToDecimal(binarySubtract(bin1, bin2)) << ")\n";
    cout << bin1 << " - " << bin3 << " = " << binarySubtract(bin1, bin3)
         << " (" << binaryToDecimal(binarySubtract(bin1, bin3)) << ")\n";

    // Shift right
    cout << "\n[Shift Right]\n";
    cout << bin1 << " >> 1 = " << shiftRight(bin1)
         << " (" << binaryToDecimal(shiftRight(bin1)) << ")\n";

    // Shift left
    cout << "\n[Shift Left]\n";
    cout << bin1 << " << 1 = " << shiftLeft(bin1)
         << " (" << binaryToDecimal(shiftLeft(bin1)) << ")\n";

    return 0;
}