// Programm to copy an array to another.
// Author - Vedika Udgir.
#include <stdio.h>

void main()
{
    int a[10],b[10];
    int n,i,j=0;

    printf("\nEnter n - ");
    scanf("%d",&n);

    for(i=0;i <= n-1;i++)
    {
        printf("\nEnter element no. %d. =",i);
        scanf("%d",&a[i]);
        b[j]=a[i];
        j++;
    }

    for(j=0; j<=n-1;j++)
    {
        printf("\n b[%d] = %d",j,b[j]);
    }

    // WE CAN ALSO JUST - b[j] = a [i]
}