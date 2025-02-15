#include <stdio.h>
#include <conio.h>

void main()
{

    int f1=1,f2=1,num,next,i=3;

    printf("Enter number of fibonacci terms to print.");
    scanf("%d",&num);

    printf("%d\n%d\n",f1,f2);

    while (i<=num)
    {
        next=f1+f2;
        printf("%d\n",next);
        f1=f2;
        f2=next;
        i++;
    }
    
}