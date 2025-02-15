#include <stdio.h>
#include <conio.h>

void main()
{
    int n,squaresum=0;
    printf("Enter n.\n");
    scanf("%d",&n);

    int i=1;
    do
    {
       squaresum += (i*i);
       i++;
    } while (i<=n);

    printf("%d is the sum of squares of all integers till n.",squaresum);
    
}