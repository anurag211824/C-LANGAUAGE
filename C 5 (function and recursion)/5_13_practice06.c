#include <stdio.h>
void printpattern(int n);
int main()
{
    int p;
    printf("enter the number of lines of star: ");
    scanf("%d", &p);
    printpattern(p);
    return 0;
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    else
    {
        printpattern(n - 1);
        for (int i = 0; i <= (2 * n - 1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
}