#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        char a = 'A';
        for (j = 1; j <= n; j++)
        {
            printf("%c ", a);
            a = a + 1;
        }
        printf("\n");
    }
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int a = 1;
        for (j = 1; j <= n; j++)
        {
            int d = a + 64;    /* d=65 */
            char ch = (char)d; /* ch =(char)*65----> ch ='A'*/
            printf("%c ",d);
            a++;
        }
        printf("\n");
    }
    return 0;
}