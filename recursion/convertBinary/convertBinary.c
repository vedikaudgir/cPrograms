//Program to convert a number from to binary.
//Author - Vedika Udgir

#include <stdio.h>

void convertBinary(int n)
{
    if (n != 0)
    {
        convertBinary(n / 2);
        printf("%d", n % 2);
    }
}

void main()
{
    int n;

    printf("Enter any number.");
    scanf("%d",&n);

    convertBinary(n);
}