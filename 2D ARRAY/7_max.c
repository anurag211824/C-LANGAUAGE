#include <stdio.h>
#include <limits.h>

int main()
{
    int r;
    printf("enetr the number of rows:");
    scanf("%d", &r);
    int c;
    printf("enetr the number of columns:");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter (%d,%d) element:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max = INT_MIN;
    int imaxr;
    int imaxc;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                imaxr=i;
                imaxc=j;

            }
        }
    }

    printf("the max element is %d\n", max);
    printf("the index of max elemment is (%d,%d)",imaxr,imaxc);
    return 0;
}