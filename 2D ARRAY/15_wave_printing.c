#include <stdio.h>

int main()
{
    int m;
    printf("enetr the number of rows:");
    scanf("%d", &m);
    int n;
    printf("enetr the number of columns:");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (i % 2 != 0)
        {
            int j = 0;
            int k = n - 1;
            for (j = 0, k = n - 1; j <= k; j++, k--)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[i][k];
                arr[i][k] = temp;
            }
        }
    }
    printf("wave matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        // printf("\n");
    }
    return 0;
}