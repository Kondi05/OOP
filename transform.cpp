#include <iostream>
#include <string>
using namespace std;

string toBinary(int number) {
    if (number == 0) return "0";
    string result = "";
    while (number > 0) {
        result = to_string(number % 2) + result;
        number /= 2;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary: " << toBinary(num) << endl;
    return 0;
}