#include <stdio.h>
void printpattern(int n);/* star pattern using iterative staements instead of recursive as in previous program*/

int main()
{
    int p;
    printf("enter the number of lines of star:");
    scanf("%d", &p);
    printpattern(p);
    return 0;
}
void printpattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}