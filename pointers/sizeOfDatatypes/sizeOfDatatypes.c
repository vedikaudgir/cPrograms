#include <stdio.h>

void main()
{
    int a = 10;
    int *ptrInt, **ptrptrInt;
    float b = 2.5, *ptrFloat;
    char c = 'v';

    *(&a) = 25;
    ptrInt = &a;
    ptrptrInt = &ptrInt;
    ptrFloat = &b;

    printf("Value of a = %d\n",a);
    printf("Value of ptrInt = %d\n", ptrInt);
    printf("Value of address pointed by ptrInt = %d\n",*(&a));
    printf("Value of double pointer = %u",ptrptrInt);
}