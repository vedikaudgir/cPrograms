//Program to reverse a string.
//Author - Vedika Udgir

#include <stdio.h>
#include <string.h>

void main()
{
    char a[50], swap;
    int i,j;

    puts("Enter a string.");
    gets(a);
    
    int start = 0, l = strlen(a), end = l - 1;
    for (i = 0; start <= end; i++)
    {
        swap = a[start];
        a[start] = a[end];
        a[end] = swap;
        start++;
        end--;
    }

    puts(a);
    
}