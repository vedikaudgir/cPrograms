#include <stdio.h>

struct point
{
    int value;
    char exam[30];
};
void main()
{
    struct point s = {100, "cpcp"};
    struct point *p = &s;

    printf("%u\n", p);
    printf("%u\n", p + 1);
    printf("%d\n", (*p).value);
    printf("%s\n", (*p).exam);
    printf("%d\n", p->value);
    printf("%s\n", p->exam);
}