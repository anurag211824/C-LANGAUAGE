// given an array of integers with 1 to n elements and the,
// size of array is n+1.One element is occuring more than one time that is duplicate
// element.fins it.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int arr[n + 1];
    for (i = 0; i < n + 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int brr[n + 1];
    for (i = 0; i < n + 1; i++)
    {
        brr[i] = 0;
        if (i == arr[i])
        {
            brr[i] = 1;
        }
    }

    return 0;
}