#include <stdio.h>
#include <stdbool.h>

void main()
{
    int i, j, a1, a2, b1, b2, c1, c2, target, a[4][4];
    bool flag = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nEnter element [%d, %d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is - \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter element to take the target.");
    scanf("%d", &target);
    int sum;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (a1 = 0; a1 < 4; a1++)
            {
                for (a2 = 0; a2 < 4; a2++)
                {
                    for (b1 = 0; b1 < 4; b1++)
                    {
                        for (b2 = 0; b2 < 4; b2++)
                        {
                            for (c1 = 0; c1 < 4; c1++)
                            {
                                for (c2 = 0; c2 < 4; c2++)
                                {
                                    if ((i != a1 || j != a2) && (i != b1 || j != b2) && (i != c1 || j != c2) && (a1 != b1 || a2 != b2) && (a1 != c1 || a2 != c2) && (b1 != c1 || b2 != c2))
                                    {
                                        sum = a[i][j] + a[a1][a2] + a[b1][b2] + a[c1][c2];
                                        if (sum == target)
                                        {
                                            printf("%d + %d + %d + %d = %d\n", a[i][j], a[a1][a2], a[b1][b2], a[c1][c2], sum);
                                            flag = 1;
                                        }
                                    }
                                }
                            }
                        }
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