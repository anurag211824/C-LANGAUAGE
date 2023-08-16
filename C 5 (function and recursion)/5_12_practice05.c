#include <stdio.h>
int sum(int s);
int main()
{
    int n,b;
    printf("enter n:");
    scanf("%d", &n);
        b = sum(n);
        printf("the sum is  terms is %d",b);
    
    return 0;
}
int sum(int s)
{
    if (s!=0)
    {
     return s+ sum(s-1);
    }

    else
    {
       return s;
    }
}