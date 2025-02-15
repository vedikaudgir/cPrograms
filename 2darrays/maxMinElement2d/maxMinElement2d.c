// Program to calculate maximum and minimum element of each row in a matrice.
// Author - Vedika Udgir

#include <stdio.h>

void main()
{
    int i, j, rows, coloumns;

    printf("Enter the number of rows and coloumns. ");
    scanf("%d%d", &rows, &coloumns);

    int a[rows][coloumns], max[rows], min[rows];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("\nEnter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        max[i] = a[i][0];
        min[i] = a[i][0];
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            if (a[i][j] > max[i])
            {
                max[i] = a[i][j];
            }
            if (a[i][j] < min[i])
            {
                min[i] = a[i][j];
            }
        }
    }

    printf("\nThe array is - \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        printf("\nLargest number in row %d is: %d", i + 1, max[i]);
    }
    for (i = 0; i < rows; i++)
    {
        printf("\nSmallest number in row %d is: %d", i + 1, min[i]);
    }
}