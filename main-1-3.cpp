#include <iostream>
using namespace std;

void count_digits(int array[4][4]);

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2},
        {3, 4, 5, 6}
    };
    count_digits(matrix); // Example output: 0:1;1:2;2:2;3:2;4:2;5:2;6:2;7:1;8:1;9:1
    return 0;
}