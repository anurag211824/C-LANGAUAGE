// write a program to sum first 10 natural numbers using while loop
#include <stdio.h>

int main()
{
    int a = 1, sum = 0;
    while (a <= 10)
    {

        sum += a;
        a++;
    }
    printf("the sum of first 10 natural number is %d\n", sum);

    //  write a program to sum first 10 natural numbers using for loop
    int z, sum2 = 0;
    for (z = 1; z <= 10; z++)
    {

        sum2 += z;
    }
    printf("the sum of first 10 natural number is %d\n", sum2);

    //  write a program to sum first 10 natural numbers using do while loop
    int y = 1, sum3 = 0;
    do
    {

        
        sum3 += y;
        y++; 
        
        
    } 
   
    
    while (y <= 10);
    printf("the sum of first 10 natural number is %d\n",sum3);

        return 0;
}