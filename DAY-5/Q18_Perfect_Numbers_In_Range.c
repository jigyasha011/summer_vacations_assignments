/* Program: Print Perfect Numbers in a Given Range
Logic:

Take starting and ending numbers as input.

For each number, find all proper divisors.

Add the divisors.

If the sum equals the number, it is a Perfect Number.

Print all Perfect Numbers in the range. */

#include <stdio.h>
int main()
{ 
  int start, end, num, i, sum; // Input range 
  printf("Enter starting number: ");
  scanf("%d", &start);
  printf("Enter ending number: ");
  scanf("%d", &end);
  printf("Perfect Numbers are:\n"); // Check every number in the range
  
for(num = start; num <= end; num++)
  {
    sum = 0; // Find proper divisors
    
    for(i = 1; i < num; i++)
      {
        if(num % i == 0) sum += i;
      } // Check Perfect Number condition
    
    if(sum == num)
      printf("%d ", num);
  }
  return 0; 
}
