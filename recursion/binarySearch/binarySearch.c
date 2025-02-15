// Program for binary Search.
// Author - Vedika Udgir

#include <stdio.h>

int binarySearch(int a[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;
    
    if (key == a[mid])
    {
        return mid;
    }
    else if (key > a[mid])
    {
        return binarySearch(a, mid + 1, end, key);
    }
    else
    {
        return binarySearch(a, start, mid - 1, key);
    }
}

void main()
{
    int a[6] = {1, 3, 5, 7, 8, 9}, key, temp;

    printf("Enter key");
    scanf("%d", &key);

    temp = binarySearch(a, 0, 5, key);

    if (temp == -1)
    {
        printf("Element not found.");
    }
    else
    {
        printf("Element found at index %d", temp);
    }
}