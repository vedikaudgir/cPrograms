// All the functions of Arrays.
// Autthor - Vedika Udgir.

#include <stdio.h>

void readMatrice(int a[10][10], int r, int c)
{
    int i = 0, j = 0;
    for (i = 0; i <= r - 1; i++)
    {
        for (j = 0; j <= c - 1; j++)
        {
            printf("\nEnter element (%d,%d): ", i, j);
            scanf("%3d", &a[i][j]);
        }
    }
}

void printMatrice(int a[10][10], int r, int c)
{
    int i = 0, j = 0;
    for (i = 0; i <= r - 1; i++)
    {
        for (j = 0; j <= c - 1; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[10][10], int r1, int c1, int b[10][10], int r2, int c2, int sum[10][10])
{
    int i = 0, j = 0;
    if (r1 != r2 || c1 != c2)
    {
        printf("These matrices cannot be added.");
    }
    else
    {
        for (i = 0; i <= r1; i++)
        {
            for (j = 0; j <= c1; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%3d", sum[i][j]);
            }
            printf("\n");
        }
    }
}

void subMatrices(int a[10][10], int r1, int c1, int b[10][10], int r2, int c2, int diff[10][10])
{
    int i, j;
    if (r1 != r2 || c1 != c2)
    {
        printf("These matrices cannot be subtracted.");
    }
    else
    {
        for (i = 0; i <= r1; i++)
        {
            for (j = 0; j <= c1; j++)
            {
                diff[i][j] = a[i][j] - b[i][j];
                printf("%3d", diff[i][j]);
            }
            printf("\n");
        }
    }
}

void mulMatrices(int a[10][10], int r1, int c1, int b[10][10], int r2, int c2, int mul[10][10])
{
    int i, j, k;
    if (r2 != c1)
    {
        printf("These matrices cannot be multiplied.");
    }
    else
    {
        for (i = 0; i <= r1; i++)
        {
            for (j = 0; j <= c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k <= c1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                    printf("%4d", mul[i][j]);
                }
            }
            printf("\n");
        }
    }
}

void main()
{
    int a[10][10], b[10][10], sum[10][10], diff[10][10], mul[10][10];
    int r1, r2, c1, c2;

    printf("Enter number of rows and coloumns in matrix 1.");
    scanf("%d%d", &r1, &c1);
    readMatrice(a, r1, c1);

    printf("Enter number of rows and coloumns in matrix 1.");
    scanf("%d%d", &r2, &c2);
    readMatrice(b, r2, c2);

    printMatrice(a, r1, c1);
    printMatrice(b, r2, c2);
    printf("\n");
    addMatrices(a, r1, c1, b, r2, c2, sum);
    printf("\n");
    subMatrices(a, r1, c1, b, r2, c2, diff);
    printf("\n");
    mulMatrices(a, r1, c1, b, r2, c2, mul);
}