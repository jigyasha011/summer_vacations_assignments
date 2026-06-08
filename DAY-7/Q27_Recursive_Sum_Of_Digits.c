/*
Program: Find Sum of Digits Using Recursion

Logic:
1. Take a number as input.
2. Extract the last digit using n % 10.
3. Add it to the sum of remaining digits.
4. Base case: if number becomes 0, return 0.
5. Display the final sum.
*/

#include <stdio.h>

// Recursive function to find sum of digits
int sumDigits(int n) {
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() 
{
  int n;
printf("Enter a number:");
scanf("%d", &n);

printf("Sum of digits =%d, sumDigits(n));

  return 0;
}
