/* Program: Find Nth Fibonacci Number
Logic:

Take the position (n) as input.

Start with first two Fibonacci numbers: 0 and 1.

Generate Fibonacci numbers up to the nth position.

Display the nth Fibonacci number. */

#include <stdio.h>
int main() 
{ 
  int n, first = 0, second = 1, next, i; // Input position
  printf("Enter position: ");
scanf("%d", &n);
if(n == 1)
{ 
  printf("Nth Fibonacci Number = 0"); 
}
else if(n == 2)
{ 
  printf("Nth Fibonacci Number = 1");
} 
else
{ 
  // Generate Fibonacci sequence
  for(i = 3; i <= n; i++)
    {
      next = first + second;
      first = second;
      second = next;
    } 
  printf("Nth Fibonacci Number = %d", second);
} 
  return 0; 
}
