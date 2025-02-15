// Program to use logic behind the standard library functions of strings.
// Author - Vedika Udgir.

#include <stdio.h>
#include <string.h>

void main()
{
    int i, l1;
    char s1[50];

    printf("\nEnter the first string\n");
    scanf("%s", &s1);
    printf("First string is - %s", s1);
    fflush(stdin);

    l1 = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        l1++;
    }
    printf("\nThe length of string 1 is - %d.",l1);
}