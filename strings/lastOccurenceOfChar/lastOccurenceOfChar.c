#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char a[50], search;

    puts("Enter any string.");
    gets(a);

    puts("Enter a character to search in the string.");
    scanf("%c", &search);

    for (i = strlen(a); i >= 0; i--)
    {
        if (a[i] == search)
        {
            printf("Last occurence of '%c' is found at index %d", search, i);
            break;
        }
    }
}