// Program to print all prime numbers till 100 using the method of sieve Of Eratosthenes.
// Author - Vedika Udgir.

#include <stdio.h>

void printMatrice(int a[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int i, j, m[10][10], k = 1;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            m[i][j] = k++;
        }
    }

    printMatrice(m);

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((m[i][j] % 2 == 0 && m[i][j] != 2) || (m[i][j] % 3 == 0 && m[i][j] != 3) || (m[i][j] % 5 == 0 && m[i][j] != 5) || (m[i][j] % 7 == 0 && m[i][j] != 7))
            {
                m[i][j] = 0;
            }
        }
    }
    printf("prime numbers till 100 are - \n");
    printMatrice(m);
}