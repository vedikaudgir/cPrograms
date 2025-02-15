// Programm to read array an an input and print it.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10];
    int n,i;

    printf("\nEnter n - ");
    scanf("%d",&n);

    for(i=0;i <= n-1;i++)
    {
        printf("\nEnter element no. %d. =",i);
        scanf("%d",&a[i]);
    }

    printf("\n The elements of the array are -");

    for(i=0; i<=n-1;i++)
    {
        printf("\n a[%d] = %d",i,a[i]);
    }
}