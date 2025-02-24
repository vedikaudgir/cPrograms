#include <stdio.h>

void main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("\na = %d", a);
    printf("\np = %d", p);
    printf("\nq = %d", q);
    printf("\nr = %d", r);
    printf("\na = %d", *p);
    printf("\na = %d", **q);
    printf("\na = %d", ***r);
    printf("\np = %d", *q);
    printf("\np = %d", **r);
    printf("\nq = %d", *r);

}