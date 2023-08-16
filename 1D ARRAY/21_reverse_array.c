// write a program to reverse the array without using any extra array
#include <stdio.h>
void reverse(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }
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
    reverse(arr, n);

    return 0;
}