// Program to use logic behind the standard library functions of strings.
// Author - Vedika Udgir.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int strc(char *s1,char *s2)
{
  while(*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
  {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

void main()
{
    char s1[50], s2[50];

    printf("Enter the first string\n");
    scanf("%s", &s1);
    printf("First string is - %s", s1);
    fflush(stdin);

    printf("\nEnter the second string\n");
    scanf("%s", &s2);
    printf("Second string is - %s", s2);
    fflush(stdin);

    printf("\n%d",strc(s1,s2));
}