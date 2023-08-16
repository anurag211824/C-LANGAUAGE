/*given an integer array and an intefger k where k<=size of the array,
we need to return the kth smallest element of the array*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("enetr the size of the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k, min, mindx;
    printf("choose an element from the array:");
    scanf("%d", &k);

    for (int i = 0; i <=k-1; i++)
    {
        min = INT_MAX;
        mindx;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                mindx = j;
            }
        }
          int temp = arr[mindx];
        arr[mindx] = arr[i];
        arr[i] = temp;
    }
    printf("the required smallest element of the given array is %d", min);
    return 0;
}