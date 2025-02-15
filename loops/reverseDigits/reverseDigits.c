//AUTHOR - VEDIKA UDGIR and help from chat gpt ;)

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, remainder=0, reverse=0;
    
    printf("\nEnter any number.");
    scanf("%d",&num);

    for(;num!=0;num/=10)
    {
        remainder=num%10;
        reverse=(reverse*10)+remainder;
    }

    printf("reversed number is = %d",reverse);
}