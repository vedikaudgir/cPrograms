//Program to determine weather a given number(taken as input) is prime or not.
//AUTHOR - VEDIKA UDGIR

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, remainder=0, reverse=0,num2;
    
    printf("\nEnter any number.");
    scanf("%d",&num);

    num2=num;

    for(;num!=0;num/=10)
    {
        remainder=num%10;
        reverse=(reverse*10)+remainder;
    }

    // printf("%d %d %d",num,reverse,num2);

    if(num2==reverse)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("Not a palindrome.");
    }
}