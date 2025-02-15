// Programm to calculate sum of all prime numbers in an array.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10];
    int n,i,j,sump=0;

    printf("\nEnter n - ");
    scanf("%d",&n);

    for(i=0;i <= n-1;i++)
    {
        printf("\nEnter element no. %d. ",i);
        scanf("%d",&a[i]);
        for(j=2;a[i]%j != 0;j++);
        if(j == a[i])
        {
        sump += a[i];
        }
    }

    printf("\n The sum of the elements of the array are is - %d",sump);
}