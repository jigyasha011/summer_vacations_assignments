/* Program: Print Prime Numbers in a Given Range
Logic:

Take starting and ending numbers as input.

Check each number in the range one by one.

For every number, check whether it is divisible by any number other than 1 and itself.

If no divisor is found, the number is prime.

Print all prime numbers in the given range. */

#include <stdio.h>
int main() { 
  int start, end, i, j, isPrime; // Input the range
  printf("Enter starting number: "); 
  scanf("%d", &start); 
  printf("Enter ending number: "); 
  scanf("%d", &end); 
  printf("Prime numbers are:\n"); // Check every number in the range 
  for(i = start; i <= end; i++)
  {
    // Numbers less than or equal to 1 are not prime
    if(i <= 1) 
      continue; isPrime = 1;
    // Check divisibility of the current number
    for(j = 2; j * j <= i; j++) 
    {
      if(i % j == 0) { isPrime = 0;
                      break;
                     }
    } // Print the number if it is prime 
    if(isPrime) printf("%d ", i);
  } 
  return 0; 
}
