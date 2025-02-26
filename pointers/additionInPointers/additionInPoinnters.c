#include <stdio.h>

void main()
{
    int a = 10;
    int *p = &a;

    printf("\na = %d", a);
    printf("\na = %d", *p);
    printf("\np = %d", p);

    *p = 7;

    printf("\na = %d", a);
    printf("\na = %d", *p);
    printf("\np = %d", p);

    p += 2;

    printf("\nAfter adding 2 to p");
    printf("\np = %d", p);

    //cannot add two pointers.
}