// write a programme to copy the contents of one array into another array in the reverse order
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[n-1-i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}