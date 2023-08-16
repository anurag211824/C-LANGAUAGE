// write a program in c to separate odd and even integers into separate arrays.
#include <stdio.h>
void even_array(int arr[], int size)
{
    printf("even array is:");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    return;
}
void odd_array(int arr[], int size)
{
    printf("odd array is:");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}
int main()
{

    int n;
    printf("enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    odd_array(arr, n);
    even_array(arr, n);

    return 0;
}