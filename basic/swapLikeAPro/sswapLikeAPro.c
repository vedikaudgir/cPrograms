//Swap like a pro
//Author - Vedika Udgir

#include <stdio.h>
#define swap(a, b) a ^= b ^= a ^= b

void main()
{
    int x = 5, y = 7;
    printf("\nThis is x = %d", x);
    printf("\nThis is y = %d", y);

    swap(x, y);

    printf("\nThis is x = %d", x);
    printf("\nThis is y = %d", y);
}