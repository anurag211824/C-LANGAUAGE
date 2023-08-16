#include <stdio.h>
void change (int *b);
int main()
{
    int a=66;
    printf("the value of a before change is %d\n", a);
    change(&a);
    printf("the value of a after change is %d\n", a);
    return 0;
}
void change (int *b)
{
    *b = 244;
}