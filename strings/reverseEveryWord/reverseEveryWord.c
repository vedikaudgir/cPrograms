//Program to reverse each and every word in a sentence while the order of the words remain the same.
//Author - Vedika Udgir.

#include <stdio.h>

void reverseWord(char a[], int start, int end)
{
    while (start < end)
    {
        char temp;
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void reverseEveryWord(char a[])
{
    int i, j, end, start = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' || a[i + 1] == '\0')
        {
            if (a[i] == ' ')
            {
                end = i - 1;
            }
            else
            {
                end = i;
            }
            reverseWord(a, start, end);
            start = i + 1;
        }
    }
}

void main()
{
    char a[50];

    printf("Enter any Sentence.");
    scanf("%[^\n]", a);

    reverseEveryWord(a);
    puts(a);
}