// Programm to subtract given matrices.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int n,m,i,j;

    printf("Enter the number rows and coloumns.");
    scanf("%d%d",&n,&m);

    int a[n-1][m-1],b[n-1][m-1],c[n-1][m-1];

    // to read arrays.
    printf("For first matrice.");
    for(i = 0;i <= n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf("\nEnter element no. (%d,%d). =",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nFor second matrice.");
    for(i = 0;i <= n-1; i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf("\nEnter element no. (%d,%d). =",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    // to print array.
    printf("\nThe matrice 1 is - \n");

    for(i=0; i<=n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe matrice 2 is - \n");
    for(i=0; i<=n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<=n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            c[i][j]= a[i][j] - b[i][j];
        }
    }
    printf("Difference of matrices is - \n");
    for(i=0; i<=n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }

}