#include <stdio.h>

#define STR(x) #x

void main()
{
    int x = 99;
    printf("%s = %d", STR(x), x);
}