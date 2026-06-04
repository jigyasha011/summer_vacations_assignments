/* Program: Find LCM (Least Common Multiple) of Two Numbers
Logic:

Take two numbers as input.

Find their GCD using Euclid's Algorithm.

Use the formula: LCM = (a × b) / GCD

Display the LCM. */

#include <stdio.h>
int main()
{ 
  int a, b, num1, num2, gcd, temp; 
  long long lcm; // Input two numbers
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b); // Store original values 
  num1 = a;
  num2 = b; // Find GCD using Euclid's Algorithm 
  while(b != 0)
    {
      temp = b;
      b = a % b;
      a = temp;
    }
  gcd = a; // Calculate LCM
  lcm = (long long)num1 * num2 / gcd;  // Display LCM 
  printf("LCM = %lld", lcm);
  return 0; 
}
