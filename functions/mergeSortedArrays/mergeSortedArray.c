//Program to merge two sorted arrays into a single sorted array.
//Author - Vedika Udgir.

#include <stdio.h>

void readArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element with index %d: ",i);
        scanf("%d",&a[i]);
    }   
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d",a[i]);
    }       
}

void mergeAndSort(int a[], int b[], int n, int m)
{
    int i, j, key;

    for (i = 0; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            /* code */
        }
        
    }
    
}
void main()
{
    int a[10], b[10], i, n, m;
}