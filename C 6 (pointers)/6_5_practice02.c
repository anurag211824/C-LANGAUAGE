#include<stdio.h>
int main(){
    int a=2;
    int *ptr;
    ptr=&a;
    printf("the address of a is %d",ptr);
    return 0;
}