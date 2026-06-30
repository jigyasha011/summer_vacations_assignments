/*
Program: Bank Account System

Logic:
1. Read account holder name, account number, and balance.
2. Read the deposit amount.
3. Add the deposit amount to the balance.
4. Display the updated account details.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char name[50];
    int accountNumber;
    float balance;
    float deposit;

    // Read account details
    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    printf("Enter Current Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    // Update balance
    balance = balance + deposit;

    // Display account details
    printf("\n----- Bank Account Details -----\n");
    printf("Account Holder : %s\n", name);
    printf("Account Number : %d\n", accountNumber);
    printf("Updated Balance: %.2f\n", balance);

    return 0;
}
