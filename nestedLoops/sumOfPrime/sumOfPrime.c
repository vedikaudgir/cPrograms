#include <stdio.h>

void main()
{
    int n, i, j,sumP=0;
    printf("enter any number n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        for (j = 2; i % j != 0; j++);
            
        if (i == j)
        {
            printf("%d\n", j);
            sumP += i;
        }
        else
        {
            printf("\n");
        }
    }
    printf("Sum of all primes till n is - %d:",sumP);
}