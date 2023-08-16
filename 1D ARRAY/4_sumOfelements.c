#include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\n");
    printf("the sum of elements is :%d", sum);
    return 0;
}