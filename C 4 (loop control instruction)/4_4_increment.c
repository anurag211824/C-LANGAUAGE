#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value after i++ is %d\n", i++);
    printf("the value of i at last is %d\n", i);
    // i++---------->phale print phir increase
    i++;
    i++;
    i += 10; // ----> increase in i by 10
    printf("the value of i is increased to %d \n", i);
    int j = 5;
    printf("the value after i++ is %d\n", ++j);
    printf("the value of i at last %d\n", j);
    // ++j--------------> phale increase phir print
    return 0;
}