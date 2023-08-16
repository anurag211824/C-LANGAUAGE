// given an array containing elements from 1 to n except one element in this range is missing
// find the missing element
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sum1 = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum1 = sum1 + arr[i];
    }
    int sum2 = (n) * (n + 1) / 2;
    int missing_number = sum2 - sum1;
    printf("the missing number is %d", missing_number);

    return 0;
}