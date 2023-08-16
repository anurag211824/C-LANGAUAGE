#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (smax < arr[i] && arr[i] != max)
            smax = arr[i];
    }
    printf("the second largest number is %d", smax);
    return 0;
}