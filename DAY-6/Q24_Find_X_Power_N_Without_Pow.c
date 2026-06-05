/*
Program: Find x raised to the power n without using pow()

Logic:
1. Take base (x) and exponent (n) as input.
2. Initialize result = 1.
3. Multiply result by x, n times.
4. Display the final result.
*/

#include <stdio.h>

int main() {
    int x, n, i;
    long long result = 1;

    // Input base and exponent
    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    // Calculate x^n
    for(i = 1; i <= n; i++) {
        result = result * x;
    }

    // Display result
    printf("%d raised to the power %d = %lld", x, n, result);

    return 0;
}
