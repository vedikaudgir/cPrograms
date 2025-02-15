// Programm to add all the elements of a matrice.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10][10];
    int n,m,i,j,s=0;

    printf("\nEnter the number of rows and coloumns - ");
    scanf("%d%d",&n,&m);

    // to read array.
    for(i=0;i <= n-1;i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf("\nEnter element no. (%d,%d). =",i+1,j+1);
            scanf("%d",&a[i][j]);
            s += a[i][j];
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
    
    printf("\nThe sum of all th elemnets in the matrice is - %d\n",s);
}