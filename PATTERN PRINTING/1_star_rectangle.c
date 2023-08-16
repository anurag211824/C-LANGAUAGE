#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    printf("enter the number of columns: ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    // outer loop -> number of lines
    {
        for (int i = 1; i <= m; i++)
        //  inner loop -> number of stars in each lines
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}