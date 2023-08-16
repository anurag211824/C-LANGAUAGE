#include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        product = product * arr[i];
    }
    printf("\n");
    printf("the summ of elements is :%d", product);
    return 0;
}