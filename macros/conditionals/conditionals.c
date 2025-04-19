#include <stdio.h>
#define IF(condition, code) \
    if (condition)          \
    {                       \
        code;               \
    }
#define CONDTIONAL(condition, code) \
    if (condition)                  \
    {                               \
        do                          \
        {                           \
            code                    \
        } while (0);                \
    }

void main()
{
    int x = 10;

    IF(x > 10, printf("\nx is greater than 10"));
    x++;
    IF(x > 10, printf("\nx is greater than 10"));
    x++;
    CONDTIONAL(x == 12,
               {
                   printf("\nx = %d", x);
                   printf("\nx was incremented 2 times.");
               });
}