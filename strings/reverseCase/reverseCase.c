#include <stdio.h>

void main()
{
    int i;
    char a[50];

    puts("Enter any string.");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] = a[i] - 32;
        }
    }

    puts(a);
}