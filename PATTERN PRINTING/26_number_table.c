#include <stdio.h>

int main()
{
    int n;
    printf("enter the no of lines:");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    int nsp = 1;
    int nst = n - 1;
    for (int i = 1; i <= n - 1; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++) /*stars*/
        {
            printf("%d",a);
            a++;
        }
        for (int k = 1; k <= nsp; k++) /*spaces*/
        {
            printf(" ");
            a++;
        }
        for (int j = 1; j <= nst; j++) /*stars*/
        {
            printf("%d", a);
            a++;
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}