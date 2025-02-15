//Program to check weather a string is a palindrome or not.
//Author - Vedika Udgir

#include <stdio.h>
#include <string.h>

void main()
{
    char a[50], b[50];
    int i,j;

    puts("Enter a string.");
    gets(a);
    
    int l = strlen(a);
    for (i = 0; a[i] != l; i++)
    {
        b[i] = a[l - i - 1];
    }
    b[l] = '\0';

    if (strcmp(a, b) == 0)
    {
        printf("Palindrome.");
    }
    else
    {
        printf("Not a palindrome.");
    }  
    
}