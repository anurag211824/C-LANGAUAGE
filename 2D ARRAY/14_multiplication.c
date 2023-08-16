#include <stdio.h>

int main()
{ /*for first matrix*/
    int m;
    printf("enter number of row for first matrix:");
    scanf("%d", &m);
    int n;
    printf("enter number of column for first matrix:");
    scanf("%d", &n);
    printf("\nenter the elements of first matrix");
    printf("\n");
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    /*for second matrix*/
    int p;
    printf("\nenter number of row for second matrix:");
    scanf("%d", &p);
    int q;
    printf("enter number of column for second matrix:");
    scanf("%d", &q);
    printf("\nenetr the elements of second matrix");
    printf("\n");
    int brr[p][q];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\n");
    if (n != p)
    {
        printf("the matrix cannot be multiplied");
    }
    else
    {
        printf("multiplication result of matrix is\n");
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int r = 0; r < n; r++)
                {
                    // res[i][j] += arr[i][r] * brr[r][j];
                    res[i][j]=res[i][j]+arr[i][r]*brr[r][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}