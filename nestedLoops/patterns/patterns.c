#include <stdio.h>

void main()
{
    int i,j,l;

    printf("Enter highest number in the pattern.");
    scanf("%d",&l);

    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= 2*(l-i)+1; j++)
        {
            if (j%2==0)
            {
            printf("   ");
            }
            else
            {
            printf(" * ");
            }
            
        }
        printf("\n");
    }
    for (i = 1; i <= l; i++)
    {
        for (j = l; j >= i; j--)
        {
            printf("   ");
        }
        for (j = 1; j < 2*i+1; j++)
        {
            if (j%2==0)
            {
            printf("   ");
            }
            else
            {
            printf(" * ");
            }
            
        }
        printf("\n");
    }
    
}