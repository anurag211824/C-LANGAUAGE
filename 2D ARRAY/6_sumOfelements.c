#include <stdio.h>

int main()
{
    int r, c;
    printf("enter the number of rows and columns:");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enetr (%d,%d) elements:", i, j);
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
    printf("the sum of elements of a 2d matrix is\n");
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("%d", sum);

    return 0;
}