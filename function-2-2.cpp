int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal = 0;
    for (int i = 0; i < number_of_digits; i++) {
        decimal = (decimal << 1) | binary_digits[i]; // Shift left and add current bit
    }
    return decimal;
}