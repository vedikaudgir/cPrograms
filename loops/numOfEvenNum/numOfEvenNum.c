#include <stdio.h>
#include <conio.h>

void main()
{
    // USING FOR LOOP.
    int n,sum = 0,i;
    printf("Enter any n to calculate the sum of all digits upto n.");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum += i;
    }

    printf("%d",sum);

}