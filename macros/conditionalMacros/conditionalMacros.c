#include <stdio.h>

#define MAX 49
#if MAX > 50
    #define LEVEL "High"
#else
    #define LEVEL "Low"
#endif

void main()
{
    printf("%s", LEVEL);
}