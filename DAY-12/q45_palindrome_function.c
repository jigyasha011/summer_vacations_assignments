/* Program: Function for Palindrome Number
   Logic:
   1. Create a function to reverse the given number.
   2. Compare the reversed number with the original number.
   3. If both are equal, the number is palindrome.
   4. Return the result and display the message.
*/

#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num)
{
    int original, reverse = 0, digit;

    original = num;

    while(num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
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

    // Check palindrome
    if(isPalindrome(num))
        printf("%d is a Palindrome Number\n", num);
    else
        printf("%d is Not a Palindrome Number\n", num);

    return 0;
}
