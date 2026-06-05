/*
Program: Convert Decimal Number to Binary

Logic:
1. Take a decimal number as input.
2. Repeatedly divide it by 2.
3. Store the remainders.
4. Print the remainders in reverse order.
*/

#include <stdio.h>

int main() {
    int n, binary[32], i = 0, j;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Convert decimal to binary
    while(n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary number
    printf("Binary number = ");

    for(j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
