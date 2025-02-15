//This program takes base and exponent as input and gives the a^n as output.
//AUTHOR - VEDIKA UDGIR

#include <stdio.h>
#include <conio.h>

void main()
{
    // USING FOR LOOP.
    int exponent,base,i=1,result=1;
    printf("Enter base and exponent.");
    scanf("%d%d",&base,&exponent);

    for(i=1;i <= exponent;i++)
    {
        result *= base;
    }

    //  while(i <= exponent)
    //     {
    //         result *= base;
    //         i++;
    //     }

    // do{
    //     result *= base;
    // }while(i <= exponent);

    printf("%d",result);
}