#include <stdio.h>
#include <conio.h>

void main()
{
    int i=1,j=1,l;

    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
            printf("  ");
        }

        for(j=i;j<=l;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}