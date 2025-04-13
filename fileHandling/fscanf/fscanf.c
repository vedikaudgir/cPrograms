#include <stdio.h>

void main()
{
    FILE *fp = fopen("usingfscanf.txt", "r");
    if (fp == NULL)
    {
        printf("\nFile not found.");
    }

    int value;
    char name[50];
    while (fscanf(fp, "%s%d", name, &value) != EOF)
    {
        printf("%10s = %04d\n", name, value);
    }

    fclose(fp);
}