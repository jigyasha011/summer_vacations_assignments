/*
Program: Ticket Booking System

Logic:
1. Read customer name and number of tickets.
2. Calculate the total ticket cost.
3. Display the booking details.
4. End the program.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char customerName[50];
    int tickets;
    float ticketPrice = 250.0;
    float totalAmount;

    // Read customer details
    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    // Calculate total amount
    totalAmount = tickets * ticketPrice;

    // Display booking details
    printf("\n----- Ticket Booking Details -----\n");
    printf("Customer Name : %s\n", customerName);
    printf("Tickets       : %d\n", tickets);
    printf("Ticket Price  : %.2f\n", ticketPrice);
    printf("Total Amount  : %.2f\n", totalAmount);

    return 0;
}
