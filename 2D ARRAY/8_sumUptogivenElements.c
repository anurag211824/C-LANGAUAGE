#include <stdio.h>

int main()
{
    int r, c,i,j;
    printf("enter the number of rows and columns:");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("enetr (%d,%d) elements:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {

            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }

    int l1, r1;
    int l2, r2;
    printf("enter l1 and r1\n");
    scanf("%d %d", &l1, &r1);
    printf("enetr l2 and r2\n");
    scanf("%d %d", &l2, &r2);
    printf("sum up to given element\n");
    int sum = 0;
    for ( i = l1; i <=r1; i++)
    {
        for ( j = l2; j <=r2; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}