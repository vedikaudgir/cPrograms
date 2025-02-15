//Program to find the longest word in a given sentence.
//Author - Vedika Udgir

#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char sentence[100], currentWord[100], longestWord[100];

    printf("Enter a sentence");
    scanf("%[^\n]", sentence);

    int maxLength = 0, currentLength = 0;

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            currentWord[currentLength++] = sentence[i];
        }
        else
        {
            currentWord[currentLength] = '\0';
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                strcpy(longestWord, currentWord);
            }
            currentLength = 0;
        }
    }

    printf("Longest Word is -> %s",longestWord);
}