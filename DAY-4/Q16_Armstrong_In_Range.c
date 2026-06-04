/* Program: Print Armstrong Numbers in a Given Range
Logic:

Take starting and ending numbers as input.

Check each number in the range.

Count the digits of the number.

Find the sum of each digit raised to the power of total digits.

If the sum equals the original number, print it. */

#include <stdio.h> 
#include <math.h>
int main()
{
  int start, end, num, temp, digit, digits, sum; // Input range
  printf("Enter starting number: ");
  scanf("%d", &start); 
  printf("Enter ending number: ");
  scanf("%d", &end);
  printf("Armstrong Numbers are:\n"); // Check every number in the range
  
for(num = start; num <= end; num++) 
{
  digits = 0; sum = 0; temp = num; // Count digits
  
  while(temp != 0) 
  { 
    digits++;
    temp /= 10;
  } 
  temp = num; // Calculate sum of powers of digits
  
  while(temp != 0)
    {
      digit = temp % 10;
      sum += pow(digit, digits);
      temp /= 10; 
    } // Check Armstrong condition
  if(sum == num) 
    printf("%d ", num); 
} 
  return 0;
}
