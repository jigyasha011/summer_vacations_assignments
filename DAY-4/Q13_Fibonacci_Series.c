/* Program: Print Fibonacci Series
Logic:

Take the number of terms as input.

Start with first two terms: 0 and 1.

Print the terms one by one.

Generate the next term by adding the previous two terms. */

#include <stdio.h>
int main()
{
  int n, first = 0, second = 1, next, i; // Input number of terms
  printf("Enter number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series:\n"); // Print Fibonacci Series
  for(i = 0; i < n; i++)
    { 
      printf("%d ", first);
      next = first + second;
      first = second; second = next;
    } 
  return 0; 
}
