#include <stdio.h>
#define FOR(i, n, code)     \
    for (i = 0; i < n; i++) \
    {                       \
        code;               \
    }
#define WHILE(i, n, code) \
    while (i < n)         \
    {                     \
        code;             \
        i++;              \
    }
#define DO_WHILE(i, n, code) \
    do                       \
    {                        \
        code;                \
        i++;                 \
    } while (i < n)

void main()
{
    int i = 0;
    printf("\n");
    FOR(i, 10, printf("%5d", i));

    i = 0;
    printf("\n");
    WHILE(i, 10, printf("%5d", i));

    i = 0;
    printf("\n");
    DO_WHILE(i, 10, printf("%5d", i));
}