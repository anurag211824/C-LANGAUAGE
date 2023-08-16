#include <stdio.h>

int main()
{
    int n;
    printf("enetr the size of the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);/*only 0 to 9 integers areb allowed*/
    }
    // bubble sort of array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // sorted array for first smallest number
    printf("the first sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // code for making first smallest number
    printf("the first smallest number\n");
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 * 10 + arr[i];
    }
    printf("%d\n", sum1);
    // sorted array for second smallest number its includes swaping if last two element is not equal
    printf("the second sorted array\n");
    for (int i = n - 2, j = n - 1; i >= 0, j > 0; i--, j--)
    {
        if (arr[j] != arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // code for making second smallest number
    printf("the seconf smallest number\n");
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 * 10 + arr[i];
    }
    printf("%d\n", sum2);
    // now finally we will sum both of the numbers sum1 and sum2
    int sum3 = sum1 + sum2;
    printf("the required sum is\n");
    printf("%d", sum3);
    return 0;
}