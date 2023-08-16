#include <stdio.h>
// write a program to print first n natural numbers using do while loop.
int main()
{
    int i=0;
    int n;
    printf("enter the number of natural numbers you want to print \n");
    scanf("%d",&n);
    do
    {
        printf(" the natural numbers are %d\n", i+1);
        i++;
    } while (i< n);

    return 0;
}