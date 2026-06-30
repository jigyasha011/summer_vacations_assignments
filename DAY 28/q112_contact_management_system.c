/*
Program: Contact Management System

Logic:
1. Read contact name and mobile number.
2. Store the details in variables.
3. Display the entered contact information.
4. End the program.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char name[50];
    char mobile[15];

    // Read contact details
    printf("Enter Contact Name: ");
    scanf("%s", name);

    printf("Enter Mobile Number: ");
    scanf("%s", mobile);

    // Display contact details
    printf("\n----- Contact Details -----\n");
    printf("Name          : %s\n", name);
    printf("Mobile Number : %s\n", mobile);

    return 0;
}
