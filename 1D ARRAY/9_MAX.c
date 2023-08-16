#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("enter element%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
            max = arr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("the maximum element is %d", max);
    return 0;
}