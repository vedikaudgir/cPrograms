#include <stdio.h>

void main()
{
    FILE* fp = fopen("usingfgets.txt","r");
    if (fp == NULL)
    {
        printf("\nCouldn't open file.");
        return;
    }
    
    char buffer[100];

    while (fgets(buffer,sizeof(buffer),fp) != NULL)
    {
        printf("%s",buffer);
    }
    
    fclose(fp);
}