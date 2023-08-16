#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * i - 1; j += 2)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    /* another way---->
    for (i = 1; i <= n; i++)
    {
        int a = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }

        printf("\n");
    }
    */
    return 0;
}