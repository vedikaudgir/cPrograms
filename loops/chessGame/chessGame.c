//AUTHOR - VEDIKA UDGIR

#include <stdio.h>
#include <conio.h>

int main()
{
    int sum=0,i,c=0,n;
    float average;

    for(n=1;n<=10;n++)
    {
        c++;
        printf("Enter number %d. - ",c);
        scanf("%d",&i);
        sum += i;
    }

    average = sum/10.0;

    printf("\nThe sum of given numbers is - %d\n The average of given numbers is %0.2f - ",sum,average);
    return 0;
}
