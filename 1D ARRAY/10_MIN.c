#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("enter element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int min = __INT_MAX__;
    for (int i = 0; i < 7; i++)
    {
        if (min > arr[i])
            min = arr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf(" the minimum element is %d", min);
    return 0;
}