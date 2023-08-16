#include <stdio.h>

// Q.3
// programme to check wheather a number is divisible by 97 or not
int main()
{
    int num;

    printf("what is the value of number ? \n");
    scanf("%d", &num);

    printf("divisibility test returns %d \n", num % 97);

    // Q.4 step by step evaluation of 3*x /y -z + k
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    int result = 3 * x / y - z + k;
    printf(" the value of 3*x /y -z + k is %d \n", result);
    // 6/3 -3 + 1
    // 2 -3 +1
    // 0
    return 0;
}