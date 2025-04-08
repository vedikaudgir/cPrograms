#include <stdio.h>
#include <stdlib.h>

__attribute__((constructor)) void pre() {
    int a = 10;
    printf("\nBefore Main");
    printf("\nThis is a = %d",a);
    char* s = (char*)malloc(sizeof(char)*20);
    printf("\nEnter a string:");
    scanf("%s", s);
    printf("This is s = %s",s);
    free(s);
}

void main(){}