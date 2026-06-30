/*
Program: Sort Names Alphabetically

Logic:
1. Read the number of names.
2. Read all names into an array.
3. Compare adjacent names and swap them if needed.
4. Display the names in alphabetical order.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Declare variables
    char name[20][50], temp[50];
    int n;
    int i, j;

    // Read number of names
    printf("Enter number of names: ");
    scanf("%d", &n);

    // Read names
    printf("Enter names:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    // Sort names
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    // Display sorted names
    printf("Names in alphabetical order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
