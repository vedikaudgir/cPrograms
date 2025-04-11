#include <stdio.h>

void main()
{
    FILE* fp;
    fp = fopen("usingfgetc.txt","r");

    if (fp == NULL)
    {
        printf("\nCouldn't open file");
        return;
    }
    
    char c;
    
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);
}