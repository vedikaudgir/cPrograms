#include <stdio.h>

void main()
{
    FILE* fp;

    fp = fopen("fopen.txt", "r");

    if (fp == NULL) 
    {
        printf("File not opened.\n");
    }
    else 
    {
        printf("File opened successfully.\n");
    }
    
    fclose(fp);
}