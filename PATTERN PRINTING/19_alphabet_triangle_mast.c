#include <stdio.h>

int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        char q = 'A';
        for (int k = 1; k <= i; k++)
        {
            printf("%c", q);
            q++;
        }
        printf("\n");
    }
    return 0;
}