#include <stdio.h>
#define SQUARE(x) ((x) * (x))
#define SWAP(a, b) a ^= b ^= a ^= b

void main()
{
    int x, y;
    printf("\nEnter the value of x and y");
    scanf("%d%d", &x, &y);

    printf("\nThe square of x is: %d", SQUARE(x));
    printf("\nThe square of y is: %d", SQUARE(y));

    SWAP(x, y);
    printf("\n\nAfter Swapping:\nx = %d\ny = %d", x, y);
}