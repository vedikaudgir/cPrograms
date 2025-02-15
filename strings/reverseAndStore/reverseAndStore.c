//Program to store a reversed string into another string.
//Author - Vedika Udgir

#include <stdio.h>
#include <string.h>

void main()
{
    char a[50], b[50], swap;
    int i,j;

    puts("Enter a string.");
    gets(a);
    
    int l = strlen(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[l - i - 1];
    }

    puts(b);
    
}