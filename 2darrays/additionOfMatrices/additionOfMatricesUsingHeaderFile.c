// #include <stdio.h>
// #include "vuarray.h"

// void main()
// {
//     int n,m,i,j;

//     printf("Enter the number rows and coloumns.");
//     scanf("%d%d",&n,&m);

//     int a[n-1][m-1],b[n-1][m-1],c[n-1][m-1];

//     // to read arrays.
//     printf("For first matrice.");
//     readmatrice(a,n,m);

//     printf("\nFor second matrice.");
//     readmatrice(b,n,m);

//     // to print arrays.
//     printf("\nThe matrice 1 is - \n");
//     printmatrice(a,n,m);
    
//     printf("\nThe matrice 2 is - \n");
//     printmatrice(b,n,m);

//     for(i=0; i<=n-1;i++)
//     {
//         for (j = 0; j <= m-1; j++)
//         {
//             c[i][j]= a[i][j] + b[i][j];
//         }
//     }

//     printf("Sum of matrices is - \n");
//     printmatrice(c,n,m);
// }