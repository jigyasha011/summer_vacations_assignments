/* Program: Find GCD (Greatest Common Divisor) of Two Numbers
Logic:

Take two numbers as input.

Use Euclid's Algorithm.

Repeatedly replace: a = b b = a % b

When b becomes 0, a contains the GCD. */

#include <stdio.h>
int main()
{
  int a, b, temp; // Input two numbers
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b); // Apply Euclid's Algorithm 
  
  while(b != 0) 
  {
    temp = b;
    b = a % b;
    a = temp;
  } // Display GCD
  printf("GCD = %d", a);
  return 0; 
}
