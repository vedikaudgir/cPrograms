// Programm to multiply given matrices.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[5][5],b[5][5],mul[5][5]={0};
    int row1,row2,coloumn1,coloumn2,i,j,k;

    printf("Enter number of rows and coloumns in matrice 1. - ");
    scanf("%d%d",&row1,&coloumn1);

    printf("Enter number of rows and coloumns in matrice 2. - ");
    scanf("%d%d",&row2,&coloumn2);

    if (coloumn1 != row2)
    {
        printf("These matrices cannot be multiplied. Try again.");
    }
    else
    {
        printf("\nFor matrice 1\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < coloumn1; j++)
            {
                printf("Enter element (%d,%d) - ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
            
        }
        
        printf("\nFor matrice 2\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < coloumn2; j++)
            {
                printf("Enter element (%d,%d) - ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
            
        }

        printf("\nMatrice 1 is - \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < coloumn1; j++)
            {
                printf("%3d ",a[i][j]);
            }
            printf("\n");
        }

        printf("\nMatrice 2 is - \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < coloumn2; j++)
            {
                printf("%3d ",b[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < row1;i++)
        {
            for (j = 0; j < coloumn2; j++)
            {
                for (k = 0; k < coloumn1; k++)
                {
                    mul[i][j] += a[i][k]*b[k][j];
                }
                
            }
        }
        printf("\nMultiplication of given matrices is - \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < coloumn2; j++)
            {
                printf("%3d ",mul[i][j]);
            }
            printf("\n");
        }       
    }   
}