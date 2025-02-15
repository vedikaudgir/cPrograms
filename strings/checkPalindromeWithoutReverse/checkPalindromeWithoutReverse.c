//Program to check weather a string is a palindrome or not.
//Author - Vedika Udgir

#include <stdio.h>
#include <string.h>

void main()
{
    char a[50];
    int i,j,c=0;

    puts("Enter a string.");
    gets(a);

    int l = strlen(a);

    int start = 0, end = l - 1;
    while (start < end)
    {
        if (a[start] == a[end])
        {
            c++;
        }
        start++;
        end--;
    }

    if (c == l/2)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
 
}