#include<stdio.h>
// write a program to print n natural number in reverse order. 
int main(){
    int n;
    printf("enter the number n\n");
    scanf("%d",&n);

    for(int a=n;a;a--){

        printf("%d \n",a);
    }
    return 0;
}