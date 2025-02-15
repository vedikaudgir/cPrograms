//Author - Vedika Udgir
//Write a program in c language to take three sides of triangle as inputs from user and print their permieter, semiperimeter and Area.

#include <stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
    int side1,side2,side3;
    printf("Enter the three integral sides of triangle.");
    scanf("%d%d%d",&side1,&side2,&side3);

    int perimeter=side1+side2+side3,semiperimeter=perimeter/2;
    float area=sqrt((semiperimeter)*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));

    printf("\nThe perimeter of the triangle is = %d\nThe semiperimeter of the triangle is = %d\nThe area of the triangle is = %.2f\n",perimeter,semiperimeter,area);
}