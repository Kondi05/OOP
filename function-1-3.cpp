#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    int counts[10] = {0}; // Initialize all counts to 0
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int num = array[i][j];
            if (num >= 0 && num <= 9) counts[num]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << i << ":" << counts[i] << (i < 9 ? ";" : "");
    }
    cout << endl;
}