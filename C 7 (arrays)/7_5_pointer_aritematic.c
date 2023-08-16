#include <stdio.h>

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("the address of ptr is %u\n", ptr);
    // // ptr=ptr+1;
    // ptr = ptr - 1;
    // // ptr++;
    // // ptr++;
    // printf("the address of ptr is %u\n", ptr);

    // char c = 34;
    // char *ptr = &c;
    // printf("the address of ptr is %u\n", ptr);
    // ptr = ptr + 1;
    // printf("the address of ptr is %u\n", ptr);
    // char c = 34;

    float f = 34.66;
    float *ptr;
    ptr=&f;
    printf("the address of f is %u\n",ptr);
    ptr = ptr + 3;
    printf("the address of f se teesra dabba is %u\n", ptr);

    return 0;
}