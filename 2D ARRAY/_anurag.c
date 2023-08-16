#include <stdio.h>

int main()
{
    int n;
    printf("enetr n:");
    scanf("%d", &n);
    int arr[n][n];
    int num = 1;
    int minrow = 0;
    int maxrow = n - 1;
    int mincol = 0;
    int maxcol = n - 1;
    int count = n * n;
    while (count >= num)
    {
        // printing minimum row
        for (int col = mincol; col <= maxcol; col++)
        {
            arr[minrow][col] = num;
            num++;
        }
        minrow++;
        // printing maxmimum column
        for (int row = minrow; row <= maxrow; row++)
        {
            arr[row][maxcol] = num;
            num++;
        }
        maxcol--;
        // printing maximum row
        for (int col = maxcol; col >= mincol; col--)
        {
            arr[maxrow][col] = num;
            num++;
        }
        maxrow--;
        // printing minimum column
        for (int row = maxrow; row >= minrow; row--)
        {
            arr[row][mincol] = num;
            num++;
        }
        mincol++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}