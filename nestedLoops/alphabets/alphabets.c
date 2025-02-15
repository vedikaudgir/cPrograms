#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j;

    // MAKING 'A'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j ==7 || i ==1 || i == 4)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'B'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || i ==1 || i == 4 || i == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'C'.
   for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 ||i == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'D'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 2 || i ==1 || i == 7 || j == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'E'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 7 || (i == 4 && j <= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'F'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || (i == 4 && j <= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'G'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 7 || (i == 4 && j >=4) || (j == 7 && i >= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'H'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || i == 4)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'I'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 7 || j == 4)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'J'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || (i == 7 && j <= 4) || j == 4 || (j == 1 && i >= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'K'.
    int qk=7;
    printf("\n");
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 3 || j == qk)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        if(i <= 3)
        {
            qk--;
        }
        else
        {
            qk++;
        }
        
    }
    printf("\n\n\n");

// MAKING 'L'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

// MAKING 'M'.
    int qm=1,pm=7;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || (j == qm && i <= 4) || (j == pm && i <= 4))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        if(i<= 4)
        {
            qm++;
            pm--;
        }      
        printf("\n");
        
    }
    printf("\n\n\n");

// MAKING 'N'.
    int qn=1;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || j == qn)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        qn++;    
        printf("\n");
        
    }
    printf("\n\n\n");
    
    // MAKING 'O'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((j == 1 || i ==1 || i == 7 || j == 7))//&&((i!=1 && j!=1) || (i!=7 && j!=1) || (i!=1 && j!=7) || (i!=7 && j!=7))
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");
    
    // MAKING 'P'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 4 || (j == 7 && i <= 4))
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");
    
    // MAKING 'Q'.
    int qq=4;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 7 || j == 7 || j == qq)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }       
        }
        printf("\n");
        if (i >= 4 && j >= 4)
        {
            qq++;
        }       
    }
    printf("\n\n\n");

    // MAKING 'R'.
    int qr=4;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 4 || (j == 7 && i <= 4) || (j == qr && i >= 4))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }       
        }

        printf("\n");

        if (i >= 4)
        {
            qr++;
        }
    }
    printf("\n\n\n");
    
    // MAKING 'S'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((j == 1 && i <= 4)|| i ==1 || i == 4 || (j == 7 && i >= 4) || i == 7)
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");
 
    // MAKING 'T'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 4 || i ==1 )
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'U'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || i == 7)
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");
    
    // MAKING 'V'.
    int p=1,q=7;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j==p || j==q)
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");

        if (i > 3)
        {
            p++;
            q--;
        }      
    }
    printf("\n\n\n");

    // MAKING 'W'.
    int pw=4,qw=4;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || (j == pw && i >= 4) || (j == qw && i >= 4))
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");

        if (i >= 4)
        {
            pw--;
            qw++;
        }              
    }
    printf("\n\n\n");

    // MAKING 'X'.
    int qx=7,px=1;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == px || j == qx)
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        px++;
        qx--;
        printf("\n");
    }
    printf("\n\n\n");

    // MAKING 'Y'.
    int qy=7,py=1;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == py || j == qy)
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");

        if(i < 4 )
        {
            py++;
            qy--;
        }
    }
    printf("\n\n\n");

// MAKING 'Z'.
    int qz=7;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 7 || j == qz)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        qz--;   
        printf("\n");
        
    }
    printf("\n\n\n");
}