//This program takes n as input and gives the sum of all n integers as output.
//AUTHOR - VEDIKA UDGIR

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

    // USING WHILE LOOP.
    // int n,sum = 0,i = 1;
    // printf("Enter any n to calculate the sum of all digits upto n.");
    // scanf("%d",&n);

    // while(i<=n)
    // {
    //     sum += i;
    //     i++;
    // }

    // printf("%d",sum);

    // USING DO WHILE LOOP.
    // int n,sum = 0,i = 1;
    // printf("Enter any n to calculate the sum of all digits upto n.");
    // scanf("%d",&n);

    // do
    // {
    //     sum += i;
    // }while(i<=n);
}
