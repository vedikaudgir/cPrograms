#include <stdio.h>
#include <conio.h>

int main()
{
    int num, remainder=0, reverse=0;

    printf("Enter any number.");

    for(scanf("%d",&num);num != 0; num /= 10)
    {
        remainder = num%10;
        reverse =(reverse*10)+remainder;
    }

    printf("reversed number is = %d",reverse);
}
