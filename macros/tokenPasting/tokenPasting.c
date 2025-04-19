#include <stdio.h>

#define STR(name) #name
#define CONCAT(name1, name2) name1##name2

void main()
{
    int xy = 99;
    printf("%s = %d", STR(xy), CONCAT(x, y));
}