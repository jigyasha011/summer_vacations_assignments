/*
Program: Library Management System

Logic:
1. Read book details such as book ID, title, and author.
2. Store the details in variables.
3. Display the entered book information.
4. End the program.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int bookId;
    char title[50];
    char author[50];

    // Read book details
    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Title: ");
    scanf("%s", title);

    printf("Enter Author Name: ");
    scanf("%s", author);

    // Display book details
    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Title  : %s\n", title);
    printf("Author Name : %s\n", author);

    return 0;
}
