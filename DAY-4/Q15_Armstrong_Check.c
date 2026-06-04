/* Program: Check Whether a Number is an Armstrong Number
Logic:

Take a number as input.

Count the number of digits.

Raise each digit to the power of the number of digits.

Add all these values.

If the sum equals the original number, it is an Armstrong number. */

#include <stdio.h>
#include <math.h>

int main() 
{ 
  int n, original, digit, digits = 0; 
  int sum = 0, temp;  // Input number
  printf("Enter a number: ");
  scanf("%d", &n);
  original = n;
  temp = n;  // Count digits 
  
  while(temp != 0)
    {
      digits++; 
      temp /= 10;
    } 
  temp = n; // Calculate sum of powers of digits
  while(temp != 0)
    {
      digit = temp % 10;
      sum += pow(digit, digits);
      temp /= 10;
    } // Check Armstrong condition 
  
  if(sum == original)
    printf("Armstrong Number"); 
  else 
    printf("Not an Armstrong Number");
  
  return 0; 
}
