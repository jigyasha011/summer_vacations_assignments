/* Program: Function to Find Sum of Two Numbers
   Logic:
   1. Create a function that accepts two numbers.
   2. Calculate their sum inside the function.
   3. Return the result.
   4. Display the sum in main().
*/

#include <stdio.h>

// Function to calculate sum
int findSum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    // Take input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call function
    result = findSum(num1, num2);

    // Display result
    printf("Sum = %d\n", result);

    return 0;
}
