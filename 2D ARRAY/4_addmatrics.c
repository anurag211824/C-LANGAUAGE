#include <stdio.h>

int main()
{
    int r, c;
    printf("enter number of rows and columns:");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int brr[r][c];
    printf("give first matrices:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter (%d,%d)", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("give 2nd matrics:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter (%d,%d)", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    printf("added matrics is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}