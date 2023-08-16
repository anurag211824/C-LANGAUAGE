// find total number of pairs in the array whose sum is equal to the given value of x

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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int totalpairs_ = 0;
    int given_value;
    printf("enter the given value:");
    scanf("%d", &given_value);
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == given_value)
            {
                totalpairs_++;
                printf("(%d,%d) ", arr[i], arr[j]);
            }
        }
    }
    printf("\n");
    printf("total number of pairs are: %d", totalpairs_);

    return 0;
}