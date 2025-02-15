// Programm to check weather a matrix is orthogonal or not.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10][10], t[10][10], identity[10][10], mul[10][10] = {0};
    int n, m, i, j, k, c = 0;

    printf("\nEnter the number of rows and coloumns - ");
    scanf("%d%d", &n, &m);

    if (n != m)
    {
        printf("Cannot be orthogonal matrice.");
    }

    else
    {
        // to read array.
        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= m - 1; j++)
            {
                printf("\nEnter element no. (%d,%d). =", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }

        // to print array.
        printf("\n The matrice is - \n");

        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= m - 1; j++)
            {
                printf(" %3d ", a[i][j]);
            }
            printf("\n");
        }

        printf("\n The transpose of the matrice is - \n");

        for (j = 0; j <= m - 1; j++)
        {
            for (i = 0; i <= n - 1; i++)
            {
                t[j][i] = a[i][j];
                printf("%3d", t[j][i]);
            }
            printf("\n");
        }

        printf("\n Identity matrice is -\n");

        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= m - 1; j++)
            {
                if (i == j)
                {
                    identity[i][j] = 1;
                }
                else
                {
                    identity[i][j] = 0;
                }
                printf("%3d", identity[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= m - 1; j++)
            {
                for (k = 0; k <= m - 1; k++)
                {
                    mul[i][j] += a[i][k] * t[k][j];
                }
            }
        }

        printf("\n The product of matrice and it's transpose is - \n");
        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= m - 1; j++)
            {
                printf(" %3d", mul[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= m - 1; j++)
            {
                if (mul[i][j] == identity[i][j])
                {
                    c++;
                }
            }
        }

        if (c == (n * m))
        {
            printf("\nThis is an orthogonal Matrice.");
        }
        else
        {
            printf("\nThis is not an orthogonal matrice.");
        }
    }
}