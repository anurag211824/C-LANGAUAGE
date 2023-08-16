#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=n; j++)
        // responsible for printing 1 2 3 4........
        {
        printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}