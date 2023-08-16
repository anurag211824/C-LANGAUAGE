// write a program to print the row number having the maximum sum in a given matrix
#include <stdio.h>
#include <limits.h>

int main()
{
    int r, c, i, j;
    printf("enter the number of rows and columns:");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enetr (%d,%d) elements:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int maxsumrow = INT_MIN;
    int maxrow;
    int sum;
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
           
        }
         if (maxsumrow < sum)
            {
                maxsumrow = sum;
                maxrow = i;
            }
        printf("the sum of %d row is %d\n", i, sum);
    }
    printf("max sum of row is %d row and its %d row\n", maxsumrow,maxrow);
    return 0;
}