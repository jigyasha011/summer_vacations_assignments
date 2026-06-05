/*
Program: Convert Binary Number to Decimal

Logic:
1. Take a binary number as input.
2. Extract digits one by one from right to left.
3. Multiply each digit by the corresponding power of 2.
4. Add all values to get the decimal number.
*/

#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, digit, position = 0;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while(binary != 0) {
        digit = binary % 10;
        decimal += digit * pow(2, position);
        binary /= 10;
        position++;
    }

    // Display decimal number
    printf("Decimal number = %d", decimal);

    return 0;
}
