#include <stdio.h>

int main()
{
    int n, i;
    int j;
    printf("enter the number of odd rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == n / 2 + 1 || i == n / 2 + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}