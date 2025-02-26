#include <stdio.h>

void main()
{
    int a = 5, b = 7;
    a = a + b - (b = a);
    printf("\na = %d\nb = %d", a, b);
}