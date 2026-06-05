/* Program: Check Whether a Number is a Perfect Number
Logic:

Take a number as input.

Find all proper divisors of the number.

Add the divisors.

If the sum equals the original number, then it is a Perfect Number. */

#include <stdio.h>
int main() 
{
  int n, i, sum = 0; // Input number
  printf("Enter a number: ");
  scanf("%d", &n); // Find proper divisors and add them
  
  for(i = 1; i < n; i++)
    {
      if(n % i == 0) sum += i;
    } // Check Perfect Number condition
  
  if(sum == n)
    printf("Perfect Number");
  else printf("Not a Perfect Number"); 
  
  return 0; 
}
