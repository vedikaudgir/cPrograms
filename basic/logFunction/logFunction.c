#include <stdio.h>
#include <math.h>

void main()
{
    double n;
    
    printf("\nEnter any number - ");
    scanf("%lf", &n);

    double c = n ? (log10(n) + 1) : 1;
    printf("\n\n%d", (int)c);
}