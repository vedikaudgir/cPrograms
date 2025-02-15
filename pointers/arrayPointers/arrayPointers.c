#include <stdio.h>

void main()
{
    int a[5][5] = {{1, 2, 4, 3, 5},{1,2,3},4,5,6}, i,j;
    int (*ptrInt)[5] = a;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%8d", *(*(a + i) + j));  // Using pointer arithmetic to access array elements
        }
        printf("\n");
    }

}