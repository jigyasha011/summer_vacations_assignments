/*
Program: Count Set Bits in a Number

Logic:
1. Take a number as input.
2. Check each bit using n % 2.
3. If the bit is 1, increase the count.
4. Divide the number by 2 to move to the next bit.
5. Print the total count of set bits.
*/

#include <stdio.h>

int main() {
    int n, count = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Count set bits
    while(n > 0) {
        if(n % 2 == 1)
            count++;

        n = n / 2;
    }

    // Display result
    printf("Number of set bits =%d",count);

return 0;
}
