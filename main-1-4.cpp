#include <iostream>
using namespace std;

void print_scaled(int array[3][3], int scale);

int main() {
    int matrix[3][3] = {{0,1,2}, {3,4,5}, {6,7,8}};
    print_scaled(matrix, 3); // Output: 0 3 6 \n 9 12 15 \n 18 21 24
    return 0;
}