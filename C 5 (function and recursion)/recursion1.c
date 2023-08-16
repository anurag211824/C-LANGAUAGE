#include <stdio.h>/*Write a program in C to print the first 50 natural numbers using recursion*/
int print(int a);
int main()
{int a=50;
    print(a);
    return 0;
}
int print(int a)
{
    if (a<=50){
        printf("%d ",a);
        print(a+1);
    }
}  