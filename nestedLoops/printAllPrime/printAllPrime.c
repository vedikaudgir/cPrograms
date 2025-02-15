// Programm to print all the prime numbers till l=n.
//AUTHOR - VEDIKA UDGIR

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n,i,j;
    printf("enter any number n");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        for(j=2;i%j!=0;j++);
        if(i==j)
        {
            printf("%d\n",j);
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}