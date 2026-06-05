/* Program: Check Whether a Number is a Strong Number
Logic:

Take a number as input.

Find the factorial of each digit.

Add all factorials.

If the sum equals the original number, then it is a Strong Number. */

#include <stdio.h>
int main()
{
  int n, original, digit, sum = 0, i, factorial; // Input number
  printf("Enter a number: ");
  scanf("%d", &n);
  original = n; // Process each digit
  
while(n != 0)
  {
    digit = n % 10; 
    factorial = 1; // Find factorial of digit 
    for(i = 1; i <= digit; i++
      { 
         factorial *= i;
    } sum += factorial; n /= 10;
  } 
  // Check Strong Number condition 
  
  if(sum == original)
    printf("Strong Number");
  else
    printf("Not a Strong Number");
  
  return 0; 
}
