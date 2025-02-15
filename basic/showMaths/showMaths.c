//Author - Vedika Udgir
//Write a program in c language to take two integral inputs from user and print their sum, difference, product and remainder.

#include <stdio.h>
#include<conio.h>

void main()

{
    int num1,num2;
    printf("Enter any two integral numbers.");
    scanf("%d%d",&num1,&num2);

    int sum=num1+num2,difference=num1-num2,product=num1*num2,remainder=num1%num2;

    printf("\nThe sum of the given numbers is = %d\nThe difference of the given numbers is = %d\nThe product of the given numbers is = %d\nThe remainder of the given numbers is = %d\n",sum,difference,product,remainder);
}