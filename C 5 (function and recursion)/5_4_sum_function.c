#include <stdio.h>
//  sum is a function which takes a and b as input and returns as an integer as an output
int sum(int a, int b); /*function prototype declearation and here a and b are parameters*/
int main()
{
    int c,d;
    c = sum(2, 14);/*here 2 and 14 are actual argument*/
    d=sum(2, 5); /*function call*/
    printf("The value of c is %d\n",c);
     printf("The value of c is %d",d);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}