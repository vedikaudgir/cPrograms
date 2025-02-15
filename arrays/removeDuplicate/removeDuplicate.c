// Programm to remove duplicate elements from the array.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10];
    int n,i,j;

    printf("\nEnter number of elements in array. -  ");
    scanf("%d",&n);

    for(i=0;i <= n-1;i++)
    {
        printf("\nEnter element no. %d. =",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n The elements of the array are - ");

    for(i=0; i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0; i <= n-1; i++)
    {
        for (j=i+1; j < n; j++)
        {
            if (a[i]==a[j])
            {
                a[j]=a[n-1]; 
                n--;
                j--;
            }
            
        }
        
    }

 //We made the duplicate element as the last element and decreased the size of array. Ultimately throwing out the last element which was the duplicate element.

    printf("\n\nThe sorted elements of the array are - ");

    for(i=0; i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }

}