/* Program: Function for Perfect Number
   Logic:
   1. Create a function to find the sum of factors.
   2. Add all proper divisors of the number.
   3. Compare the sum with the original number.
   4. Return the result and display the message.
*/

#include <stdio.h>

// Function to check perfect number
int isPerfect(int num)
{
    int i, sum = 0;

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    // Read number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check perfect number
    if(isPerfect(num))
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is Not a Perfect Number\n", num);

    return 0;
}
