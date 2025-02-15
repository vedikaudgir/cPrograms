//Function to find the longest word in a sentence.
//Author - Vedika Udgir.

#include <stdio.h>
#include <string.h>

void findLongestWord(char sentence[])
{
    int i, currentLength = 0, maxLength = 0;
    char currentWord[100], longestWord[100];
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            currentWord[currentLength] = sentence[i];
            currentLength++;
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
    printf("Longest word is -> %s",longestWord);
}
void main()
{
    char a[100];

    printf("Enter any sentence");
    scanf("%[^\n]",a);

    findLongestWord(a);
}