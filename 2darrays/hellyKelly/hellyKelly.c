#include <stdio.h>

void readMatrix(int a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter element (%d,%d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void printMatrix(int a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void printHellyKelly(int a[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            /* code */
        }
    }
}

void main()
{
    int i, j, a[3][3];

    readMatrix(a);
    printf("\nGiven Matrix is - \n");
    printMatrix(a);
}