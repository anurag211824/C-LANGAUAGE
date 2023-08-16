#include <stdio.h>
int powerlog(int a, int b)
{
   if(b==0)return 1;
 int x = powerlog(a, b / 2);
    if (b % 2 == 0)
    {
        return x*x;
    }
    else{
        return x*x*a;
    }
}
int main()
{ int p, q;
    printf("enter base:");
    scanf("%d", &p);
    printf("enter power:");
    scanf("%d", &q);
    printf("required answer is %d", powerlog(p,q));
    

    return 0;
}