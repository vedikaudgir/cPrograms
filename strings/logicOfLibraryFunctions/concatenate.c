// Program to use logic behind the standard library functions of strings.
// Author - Vedika Udgir.

#include <stdio.h>
#include <string.h>

void main()
{
    int i, l1, l2;
    char s1[50], s2[50];

    printf("Enter the first string\n");
    scanf("%s", &s1);
    printf("First string is - %s", s1);
    fflush(stdin);

    printf("\nEnter the second string\n");
    scanf("%s", &s2);
    printf("Second string is - %s", s2);
    fflush(stdin);

    l1 = strlen(s1);
    l2 = strlen(s2);
    for (i = 0; i < l2; i++)
    {
        s1[l1 + i] = s2[i];
    }
    s1[l1 + l2] = '\0';
    printf("\nThe concatenated string is - %s", s1);
}