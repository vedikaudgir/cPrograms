#include <stdio.h>
#include <stdbool.h>

void main()
{
    int i, j, k, l, sum, a[15];
    bool flag = 0;

    for (i = 0; i < 15; i++)
    {
        printf("\nEnter element no. %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to take the sum.");
    scanf("%d", &sum);

    for (i = 0; i < 12; i++)
    {
        for (j = i + 1; j < 13; j++)
        {
            for (k = j + 1; k < 14; k++)
            {
                for (l = k + 1; l < 15; l++)
                {
                    if (a[i] + a[j] + a[k] + a[l] == sum)
                    {
                        printf("\nElements whose sum is %d : %d %d %d %d", sum, a[i], a[j], a[k], a[l]);
                        flag = 1;
                    }
                }
            }
        }
    }

    if (flag == 0)
    {
        printf("no elements found.");
    }
}