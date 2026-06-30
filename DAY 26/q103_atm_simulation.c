/*
Program: ATM Simulation

Logic:
1. Read the account balance and withdrawal amount.
2. Check whether sufficient balance is available.
3. Deduct the withdrawal amount if possible.
4. Display the remaining balance or an insufficient balance message.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    float balance, withdraw;

    // Read account balance
    printf("Enter account balance: ");
    scanf("%f", &balance);

    // Read withdrawal amount
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdraw);

    // Check balance and perform withdrawal
    if (withdraw <= balance)
    {
        balance = balance - withdraw;

        printf("Withdrawal successful.\n");
        printf("Remaining Balance = %.2f\n", balance);
    }
    else
    {
        printf("Insufficient balance.\n");
    }

    return 0;
}
