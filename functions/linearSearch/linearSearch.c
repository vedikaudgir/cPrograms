//Program for linear Search.
//Author - Vedika Udgir.

#include <stdio.h>
#include <stdbool.h>

void linearSearch(int a[], int n, int key)
{
    int i;
    bool flag = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at index %d.\n", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Element not found.");
    }
}

void readarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element with index %d: ", i);
        scanf("%d", &a[i]);
    }
}

void printArray(int a[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
void main()
{
    int a[50], n, key;
    printf("Enter number of elements in array");
    scanf("%d", &n);

    readarray(a, n);
    printf("Array is :");
    printArray(a, n);

    printf("\nEnter the element to find.  ");
    scanf("%d", &key);

    linearSearch(a, n, key);
}