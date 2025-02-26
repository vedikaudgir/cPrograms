#include <stdio.h>

void main()
{
    int a[5] = {10, 20, 30, 40, 45};
    int *p = &a[0];
    int *q = &a[3];

    printf("\na = %d", a);
    printf("\np = %d", p);
    printf("\nq = %d", q);
    printf("\na[0] = %d", *p);
    printf("\na[3] = %d", *q);
    printf("\nq - 3 = %d", q - 3);
    printf("\nq - p = %d", q - p);
    printf("\np - q = %d", p - q);
    printf("\n*(q - 3) = %d", *(q - 3));
    printf("\n*(q - 2) = %d", *(q - 2));
    printf("\n*(q - 1) = %d", *(q - 1));
    printf("\n*q = %d", *q);
    printf("\n*(p + 3) = %d", *(p + 3));
    printf("\n*(p + 2) = %d", *(p + 2));
    printf("\n*(p + 1) = %d", *(p + 1));
    printf("\n*p = %d", *p);
}