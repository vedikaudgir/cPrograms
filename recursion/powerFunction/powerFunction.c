// Program to calculate a power of agiven base to a given exponent.
// Author - Vedika Udgir

#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

void main()
{
    int expo, base;

    printf("Enter base and exponent.");
    scanf("%d%d",&base,&expo);

    printf("%d to the power of %d is %d\n", base, expo, power(base, expo));
}