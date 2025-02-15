//AUTHOR - VEDIKA UDGIR

#include <stdio.h>
#include <conio.h>

void main()
{

    int num,k;
    printf("\nEnter any number to check weather it's prime or not - ");
    scanf("%d",&num);

    for(k=2;num%k!=0;k++);
    if(k==num)
    {
        printf("prime");// loop pura chatkake aaye ho.
    }
    else
    {
        printf("composit");// loop beech me hi khatam ho gaya.
    }
}

//loop to check prime number. 
//PRIME NUMBER FOR PROGRAMMERS - n is a prime if it is not divisible by any number between 2 to n.
//we take a counter variable k and check it's modulo with numbers from 2 to num.
//If it's modulo is equal to 0 then loop breaks and aur counter variable cannot reach num.
//If it's modulo is not equal to 0 with all the numbers till num, then it keeps on incrementing till it becomes num
// Then we check if num == k then it's prime and vice versa.
