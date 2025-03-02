#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 0, c = 1, n = 0;
    int *p = calloc(20, (sizeof(int)));
    do
    {
        printf("\nEnter %d element: ", i);
        scanf("%d", (p + i));
        printf("\nEnter 0 to exit: ");
        scanf("%d", &c);
        n++;
        i++;
    } while (c != 0);

    for (i = 0; i < n; i++)
    {
        printf("%4d", *(p + i));
    }
    free(p);
}