#include <climits> // For INT_MIN and INT_MAX

int array_min(int integers[], int length) {
    if (length <= 0) return -1;
    int min_val = INT_MAX;
    for (int i = 0; i < length; i++) {
        if (integers[i] < min_val) min_val = integers[i];
    }
    return min_val;
}

int array_max(int integers[], int length) {
    if (length <= 0) return -1;
    int max_val = INT_MIN;
    for (int i = 0; i < length; i++) {
        if (integers[i] > max_val) max_val = integers[i];
    }
    return max_val;
}

int sum_min_max(int integers[], int length) {
    if (length <= 0) return -1;
    return array_min(integers, length) + array_max(integers, length);
}
