//Author - Vedika Udgir
//Write a program in c language to take mass and velocity as input and display it's Kinetic Energy.

#include <stdio.h>
#include<conio.h>
#include <math.h>

void main()

{
    int mass,velocity;
    printf("Enter mass of the body.");
    scanf("%d",&mass);

    printf("\nEnter velocity of the body.");
    scanf("%d",&velocity);

    int KE=0.5*mass*velocity*velocity;

    printf("\nThe Kinetic Energy of the body is = %d",KE);
}