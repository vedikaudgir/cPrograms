//Author - Vedika Udgir
//Write a program in c language to take tempreature in farenheit as input and convert it into degree celcius.

#include <stdio.h>
#include<conio.h>

void main()

{
    int fTemp;
    printf("Enter the tempreature in Farenheit.");
    scanf("%d",&fTemp);

    float cTemp=(fTemp-32)*0.5555555556;

    printf("\nThe tempreature in degree Celcius is = %.2f",cTemp);
}