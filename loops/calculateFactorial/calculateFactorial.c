//AUTHOR - VEDIKA UDGIR

#include <stdio.h>
#include <conio.h>

void main()
{
    //loop to calculate factorial of a given number.
    int n,factorial=1,i;
    printf("Enter any number to calculate it's factorial - ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            factorial*=i;
    }
    printf("factorial of number is - %d\nThe value of i becomes - %d",factorial,i); //here i becomes 7 as it gets post incremented.

// //loop to calculate factorial of a given number.
//     int m,factorial2=1,j;
//     printf("\nEnter any number to calculate it's factorial - ");
//     scanf("%d",&m);
//     for(j=1;j<=m;j++)
//     {
//             factorial2*=j;
//     }
//     j--;
//     printf("factorial of number is - %d\nThe value of j becomes - %d",factorial2,j); //We decrement j again.

}