/*
Program: Inventory Management System

Logic:
1. Read product details from the user.
2. Store product ID, name, quantity, and price.
3. Calculate the total inventory value.
4. Display the product information.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int productId;
    int quantity;
    char productName[50];
    float price;
    float totalValue;

    // Read product details
    printf("Enter Product ID: ");
    scanf("%d", &productId);

    printf("Enter Product Name: ");
    scanf("%s", productName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price per Unit: ");
    scanf("%f", &price);

    // Calculate total value
    totalValue = quantity * price;

    // Display inventory details
    printf("\n----- Inventory Details -----\n");
    printf("Product ID      : %d\n", productId);
    printf("Product Name    : %s\n", productName);
    printf("Quantity        : %d\n", quantity);
    printf("Price per Unit  : %.2f\n", price);
    printf("Total Value     : %.2f\n", totalValue);

    return 0;
}
