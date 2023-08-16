// Write a program in C to delete an element at a desired position from an array.
#include <stdio.h>
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
    int desired_value;
    printf("enter the desired value to get deleted from the array:");
    scanf("%d", &desired_value);
    int i = 0;
    int a = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == desired_value)
        {
            a = i;
            break;
        }
    }
    printf("new array:");
    for (a = 0; a < n; a++)
    {
        if (a != i)
        printf("%d ", arr[a]);
    }

    return 0;
}