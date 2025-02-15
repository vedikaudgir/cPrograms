// Programm to take a matrice as an input and return it's transpose.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10][10];
    int n,m,i,j;

    printf("\nEnter the number of rows and coloumns - ");
    scanf("%d%d",&n,&m);

    // to read array.
    for(i=0;i <= n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf("\nEnter element no. (%d,%d). =",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    // to print array.
    printf("\n The matrice is - \n");

    for(i=0; i<=n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    // to print transpose.
    printf("\n The transpose of the matrice is - \n");

    for(j=0; j<=m-1;j++)
    {
        for (i = 0; i <= n-1; i++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}