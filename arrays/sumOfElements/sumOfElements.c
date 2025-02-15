// Programm to add all the elemennts of an array.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10];
    int n,i,sum=0;

    printf("\nEnter n - ");
    scanf("%d",&n);

    for(i=0;i <= n-1;i++)
    {
        printf("\nEnter element no. %d. ",i);
        scanf("%d",&a[i]);
        sum += a[i];
    }

    printf("\n The sum of the elements of the array are is - %d",sum);
}