// given a matrix having 0-1 only, find the row with the maximum number of 1s.
#include <stdio.h>
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
    int a;
    int maxcount=0;
    int maxidx=-0;
    for (int i = 0; i < r; i++)
    {
        a = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                a++;
            }
          
        }
          if (maxcount<a)
            {
                maxcount=a;
                maxidx=i;
            }

        printf("the number of 1 in %d row is %d\n", i,maxcount);
    }
    printf("the row with max number of 1 is %d",maxidx);
    return 0;
}