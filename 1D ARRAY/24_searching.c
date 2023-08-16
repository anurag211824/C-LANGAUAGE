#include <stdio.h>
#include <stdbool.h>

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
    int k;
    printf("enter the element you want to search from the array:");
    scanf("%d", &k);

    bool flag = false; /*flase means element is not present*/
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            flag = true; /*true means element is present */
            idx = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array", k);
    }
    else
    {
        printf("%d is present in the given array and its index is %d", k, idx);
    }
    return 0;
}