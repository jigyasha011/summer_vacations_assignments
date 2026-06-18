/* Program: Function for Armstrong Number
   Logic:
   1. Create a function to calculate sum of cubes of digits.
   2. Extract digits one by one.
   3. Compare the sum with the original number.
   4. Return the result and display the message.
*/

#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int num)
{
    int original, digit, sum = 0;

    original = num;

    while(num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    // Take input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check Armstrong number
    if(isArmstrong(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is Not an Armstrong Number\n", num);

    return 0;
}
