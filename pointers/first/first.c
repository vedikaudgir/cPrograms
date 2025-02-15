#include <stdio.h>

void main()
{
    int a = 10;
    int *ptrInt;

    *(&a) = 25;
    ptrInt = &a;

    printf("Value of a = %d\n",a);
    printf("Value of ptrInt = %d\n", ptrInt);
    printf("Value of ptrInt = %d\n", *ptrInt);
    printf("Value of address pointed by ptrInt = %d\n",*(&a));
}