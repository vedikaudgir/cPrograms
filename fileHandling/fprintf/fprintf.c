#include <stdio.h>

void main()
{
    FILE* fp = fopen("usingfprintf.txt","a");
    if (fp == NULL)
    {
        printf("\nFile not found.");
        return;
    }
    
    char append[200];
    printf("\nEnter text to print in file.\n");
    scanf("%[^EOF]", append);

    fprintf(fp, "\n%s", append);
    printf("\nAppended in the file succesfully.");

    fclose(fp);
}