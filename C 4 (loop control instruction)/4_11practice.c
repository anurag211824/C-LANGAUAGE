#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the number to write its multiplication table:");
    scanf("%d",&n);
    for (i =1; i<=10; i++)
    {
        printf("%dx%d=%d\n", n,i,n*i);
    }

    return 0;
}
