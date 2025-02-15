//Programmm to check if a given matrix is an identity matrix or not.
//Vedika Udgir

#include <stdio.h>
#include <stdbool.h>

void main()
{
    int a[10][10], i, j, n;
    bool flag;

    printf("Enter the order of the matrice.");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter Element (%d, %d) ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("\nIdentity Matrice");
    }
    else
    {
        printf("\nNot an Identity Matrice");
    }
}