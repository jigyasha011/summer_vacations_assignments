/* Program: Function to Find Factorial
   Logic:
   1. Create a function to calculate factorial.
   2. Multiply numbers from 1 to n.
   3. Return the factorial value.
   4. Display the result in main().
*/

#include <stdio.h>

// Function to calculate factorial
long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    // Read input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display factorial
    printf("Factorial = %lld\n", factorial(num));

    return 0;
}
