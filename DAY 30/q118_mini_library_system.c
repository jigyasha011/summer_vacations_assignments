/*
Program: Mini Library System

Logic:
1. Store multiple book records using arrays and strings.
2. Read book ID, title, and author.
3. Display all stored book records.
4. Handle multiple entries using loops.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int bookId[50];
    char title[50][50];
    char author[50][50];
    int n;
    int i;

    // Read number of books
    printf("Enter number of books: ");
    scanf("%d", &n);

    // Read book details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Title: ");
        scanf("%s", title[i]);

        printf("Enter Author: ");
        scanf("%s", author[i]);
    }

    // Display book records
    printf("\n----- Library Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("ID: %d | Title: %s | Author: %s\n", bookId[i], title[i], author[i]);
    }

    return 0;
}
