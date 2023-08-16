#include <stdio.h>
typedef int *pointer;
int main()
{
    int x = 2, y = 3;
    pointer a = &x, b = &y;
    printf("%p\n", a);
    printf("%p\n", b);
    return 0;
}


// in this program we have learnt that how we can store
// two pointer in smae data type by using typedef