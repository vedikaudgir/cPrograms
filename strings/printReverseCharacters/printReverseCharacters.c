//Program in C to print individual characters of a string in reverse order.
//Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int i,l = 0;
    char a[50];

    printf("Enter the string\n");
    scanf("%[^\n]", &a);
    printf("First string is - %s\n", a);
    fflush(stdin);

    for (i = 0; i != '\0'; i++)
    {
        l++;
    }

    for (i = l; i >= 0; i--)
    {
        printf("%c\n",a[i]);
    }
    
}