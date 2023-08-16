// find the diffrence between the sum of elements at even indices to the sum of elements at odd indices
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of a array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        if (i % 2 == 0)
            sum_even = sum_even + arr[i];
        else
            sum_odd = sum_odd + arr[i];
    }
    printf("\n");
    printf("the difference is %d", sum_even - sum_odd);
    return 0;
}