#include <stdio.h>
int pmf(int x)
{
    int i, j, c = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            c = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    c++;
            }
            if (c == 2)
                printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    pmf(n);
}