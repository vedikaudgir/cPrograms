#include <stdio.h>

void main()
{
    int n;

    printf("\nEnter any number - ");
    scanf("%d", &n);

    printf("%d", n % 9 ? n % 9 : n ? 9 : 0);
}