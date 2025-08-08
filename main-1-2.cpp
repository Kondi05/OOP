#include <iostream>
using namespace std;

int is_identity(int array[10][10]);

int main() {
    int identity[10][10] = {0};
    for (int i = 0; i < 10; i++) identity[i][i] = 1;

    cout << is_identity(identity) << endl; // Expected: 1 (true)
    return 0;
}