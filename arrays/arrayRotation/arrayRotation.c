// Programm to rotate an array.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10];
    int n, i, j, k, temp;

    printf("\nEnter n - ");
    scanf("%d", &n);

    for (i = 0; i <= n - 1; i++)
    {
        printf("\nEnter element no. %d. =", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter number of rotations.");
    scanf("%d", &k);

    printf("\n The elements of the array are -");

    for (i = 0; i <= n - 1; i++)
    {
        printf("%3d", a[i]);
    }

    for (i = 0; i <= k; i++)
    {
        temp = a[n-1];
        for (j = n - 1; j < 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    printf("\n The elements of the array are -");

    for (i = 0; i <= n - 1; i++)
    {
        printf("%3d", a[i]);
    }
}