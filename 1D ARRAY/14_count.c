// count the number of elements in a given array greater than a given number
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
    int given_number;
    printf("enter the given number:");
    scanf("%d", &given_number);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        if (arr[i] > given_number)
            count++;
    }
    printf("\n");
    printf("the number of element greater than given number is %d:", count);
    return 0;
}