#include <stdio.h>
#include <conio.h>

void main()
{
    int i=2,j=1,sume=0,sumo=0;

    do
    {
        sume += i;
        i +=2;
    } while (i<=15);

    do
    {
        sumo += j;
        j+=2;
    } while (j<=15);
    
    printf("The sum of Even Numbers is - %d\nThe sum of odd numbers is - %d",sume,sumo);

}