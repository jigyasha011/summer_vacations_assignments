/* Program: Function to Check Prime Number
   Logic:
   1. Create a function to check prime number.
   2. Divide the number by values from 2 to n-1.
   3. If divisible, it is not prime.
   4. Return result and display message.
*/

#include <stdio.h>

// Function to check prime
int isPrime(int num)
{
    int i;

    if(num <= 1)
        return 0;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check result
    if(isPrime(num))
    {
        printf("%d is a Prime Number\n", num);
    }
    else
    {
        printf("%d is Not a Prime Number\n", num);
    }

    return 0;
}
