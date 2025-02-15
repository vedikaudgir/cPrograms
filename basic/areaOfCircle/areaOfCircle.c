//Author - Vedika Udgir
//Write a program in c language to take radius of circle as input and display itts area.

#include <stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14

void main()

{
    float radius;
    printf("Enter the radius of Circle.");
    scanf("%f",&radius);

    float area=PI*pow(radius,2);

    printf("\nThe area of circle is - %.2f",area);
}