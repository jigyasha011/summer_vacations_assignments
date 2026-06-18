/* Program: Function for Fibonacci Series
   Logic:
   1. Create a function to print Fibonacci series.
   2. Start with first two numbers 0 and 1.
   3. Generate next term by adding previous two terms.
   4. Print the series up to n terms.
*/

#include <stdio.h>

// Function to print Fibonacci series
void fibonacci(int terms)
{
    int first = 0, second = 1, next;
    int i;

    for(i = 1; i <= terms; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int terms;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");

    // Function call
    fibonacci(terms);

    return 0;
}
