// find total number of triplets in the array whose sum is equal to the given value of x

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
    int totaltriplets_ = 0;
    int given_value;
    printf("enter the given value:");
    scanf("%d", &given_value);
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j]+arr[k] == given_value)
                {
                    totaltriplets_++;
                    printf("(%d,%d,%d) ", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("\n");
    printf("total number of pairs are: %d", totaltriplets_);

    return 0;
}