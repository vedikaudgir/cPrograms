// Program to find the maximum and minimum element in an array.
// Author - Vedika Udgir

#include <stdio.h>

void main()
{
    int i, max, min, n;

    printf("Enter number of elements in array.");
    scanf("%d", &n);

    int a[n];

    max = a[0];
    min = a[0];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element no. %d: ", i + 1);
        scanf("%d",&a[i]);

        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nThe maximum element is - %d\nThe minimum element is - %d",max,min);
}