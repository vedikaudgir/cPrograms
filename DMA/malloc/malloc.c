#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 0, n = 0;
    int *p = malloc(20 * (sizeof(int)));
    do
    {
        printf("\nEnter %d element: ", i);
        scanf("%d", (p + i));
        n++;
        i++;
    } while (*(p + i) < 0);

    for (i = 0; i < n; i++)
    {
        printf("%4d", *(p + i));
    }
    free(p);
}