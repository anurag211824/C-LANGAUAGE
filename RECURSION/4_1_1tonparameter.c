#include <stdio.h>
void increasing(int a, int x)
{ 
if (a>x)
    {
        return;
    }
    else
    {
        printf("%d ", a);
        increasing(a + 1,x);
        return;
    }
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}