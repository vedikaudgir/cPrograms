#include <stdio.h>

void swapValue(int *num1, int *num2)
{
    int t;
    t = *num1;
    *num1 = *num2;
    *num2 = t;
}

void main()
{
    int a,b;

    printf("Enter any two numbers.");
    scanf("%d%d",&a,&b);

    printf("a is - %d\nb is - %d",a,b);

    swapValue(&a,&b);

    printf("\nAfter swapping - \na is - %d\nb is - %d",a,b);

}