#include <stdio.h>
#include <string.h>

void main()
{
    char h[10] = "harry", p[10] = "potter",t[10];

    strrev(h);
    strrev(p);

    puts(h);
    puts(p);
    
    strrev(h);
    strrev(p);

    strcpy(t,h);
    strcpy(h,p);
    strcpy(p,t);

    puts(h);
    puts(p);

    strcpy(t,h);
    strcpy(h,p);
    strcpy(p,t);

    strcat(h,p);
    strcat(p,h);

    puts(h);
    puts(p);

    h[10] = "harry", p[10] = "potter";

    strcmp(h,p);
    strcmp(p,h);
    
    puts(h);
    puts(p);
}