// addition of two matrix withourt using third matrix
#include <stdio.h>
int main()
{
    int rows, columns;
    printf("enter the number of rows and columns:");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];
    printf("give 1st matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("enter (%d ,%d) element:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[rows][columns];
    printf("give 2nd matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("enter (%d ,%d) element:", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    { 
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("added matrix is \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}