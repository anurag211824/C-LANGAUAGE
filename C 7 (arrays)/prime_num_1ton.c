#include <stdio.h>

int main()
{
    int n, c;
    printf("enter the number n to which you want to print prime numbers:");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        c = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d ", i);
        }
    }
    return 0;
}