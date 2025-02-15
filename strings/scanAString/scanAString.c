#include <stdio.h>

void main()
{
    int i,j;
    char word[50], sentence[50], para[50];

    printf("Enter the string\n");
    scanf("%s",&word);

    printf("%s",word);

    fflush(stdin);

    printf("\nEnter the sentence\n");
    scanf("%[^\n]",&sentence);

    printf("%s",sentence);

    fflush(stdin);

    printf("\nEnter the paragraph\n");
    scanf("%[^EOF]",&para);

    printf("%s",para);

}