#include <stdio.h>

void main()
{
    FILE* fp = fopen("scary.txt","r");
    if (fp == NULL)
    {
        printf("\nError");
    }

    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }   
}