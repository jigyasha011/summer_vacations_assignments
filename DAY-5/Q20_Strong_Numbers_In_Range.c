/* Program: Print Strong Numbers in a Given Range
Logic:

Take starting and ending numbers as input.

For each number, find the factorial of every digit.

Add the factorials.

If the sum equals the original number, then it is a Strong Number.

Print all Strong Numbers in the range. */

#include <stdio.h>
int main()
{
  int start, end, num, temp, digit; int sum, factorial, i; // Input range
  printf("Enter starting number: ");
  scanf("%d", &start); 
  printf("Enter ending number: ");
  scanf("%d", &end); 
  printf("Strong Numbers are:\n"); // Check every number in the range
  
for(num = start; num <= end; num++) 
{ 
  temp = num; sum = 0; // Process each digit 
  
while(temp != 0)
  { 
    digit = temp % 10;
    factorial = 1; // Find factorial of digit
    
    for(i = 1; i <= digit; i++) 
    {
      factorial *= i;
    } 
    
    sum += factorial;
    temp /= 10;
  } // Check Strong Number condition 
  
  if(sum == num)
    printf("%d ", num); 
}
  return 0; 
}
