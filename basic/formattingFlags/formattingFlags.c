//Author - VEDIKA UDGIR
//september-3-2024

#include <stdio.h>
#include <conio.h>

void main()
{
    printf("%-20s%-20s%-20s","SR NO","NAME","MARKS");
    printf("\n%-20d%-20s%-20.2f",1,"Harry Potter",57.00);
    printf("\n%-20d%-20s%-20.2f",2,"Newt Scamandar",90.25);    
    printf("\n%-20d%-20s%-20.2f",3,"Hermione Granger",97.00);
    printf("\n%-20d%-20s%-20.2f",4,"Ronald Weezely",64.67);
    printf("\n%-20d%-20s%-20.2f",5,"Ginny Weezely",82.00);
    printf("\n%-20d%-20s%-20.2f",6,"Draco Malfoy",94.38);

    int a=12345;
    //This width formatting flag never overwrites it prints the complete number.
    printf("\n%3d%5d%8d",a,a,a);
}
