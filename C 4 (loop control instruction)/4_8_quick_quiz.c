#include<stdio.h>
// write a program to print first n natural numbers using for_loop. 
int main(){
    int n;
    printf("enter the number of natural numbers to print\n");
    scanf("%d",&n);
    for(int a=0; a<n;a++){

        printf("%d \n", a+1);
    }
    return 0;
}