/* Program: Function to Find Maximum Number
   Logic:
   1. Create a function that receives two numbers.
   2. Compare both numbers.
   3. Return the larger number.
   4. Display the result.
*/

#include <stdio.h>

// Function to find maximum
int findMax(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, max;

    // Read two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function call
    max = findMax(num1, num2);

    // Print result
    printf("Maximum number = %d\n", max);

    return 0;
}
