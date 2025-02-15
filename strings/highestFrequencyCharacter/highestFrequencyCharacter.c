#include <stdio.h>

void main()
{
    int i, j, k = 0, max, c[50];
    char a[50];

    puts("Enter any string.");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = i + 1; a[j] != '\0'; j++)
        {
            if (a[j] == a[i])
            {
                c[k]++;
                k++;
            }
        }
    }

    max = c[0];
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    printf("The maximum repeated character in the string is - %c", c[max]);
}