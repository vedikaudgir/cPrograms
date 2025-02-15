#include <stdio.h>

void read1d(int a[50],int n)
{
    int i;
    for(i=0; i<=n-1; i++)
    {
        printf("Enter element no. %d - ",i+1);
        scanf("%d",&a[i]);
    }
}

void print1d(int a[50],int n)
{
    int i;
    for (i = 0; i <= n-1; i++)
    {
       printf("%d ",a[i]);
    }
    
}

void readmatrice(int a[50][50], int n, int m)
{
    int i,j;
    for (i = 0; i <= n-1; i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf("\nEnter element (%d,%d)",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
}

void printmatrice(int a[50][50], int n, int m)
{
    int i,j;
    for (i = 0; i <= n-1; i++)
    {
        for (j = 0; j <= m-1; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
}