#include <stdio.h>
#include <string.h>

void checkAnagram(char a[], char b[])
{
    int i, j, freqA[256] = {0}, freqB[256] = {0};
    if (strlen(a) != strlen(b))
    {
        printf("Not an Anagram.");
    }
    else
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            freqA[a[i]]++;
            freqB[b[i]]++;
        }

        for (int i = 0; i < 256; i++)
        {
            if (freqA[i] != freqB[i])
            {
                printf("Not an Anagram.\n");
                return;
            }
        }
    }

    printf("Anagram.\n");
}

void main()
{
    char a[50], b[50];
    puts("Enter a");
    gets(a);
    puts("Enter b");
    gets(b);
    checkAnagram(a, b);
}