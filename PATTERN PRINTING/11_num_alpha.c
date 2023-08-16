#include <stdio.h>

int main()
{
    int n, i;
    int j;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        char a = 'A';
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", a);
                a += 1;
            }
            else
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}