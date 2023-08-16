#include<stdio.h>

int main(){
    int n;
    int b=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(b<=10){

        int c=n*b;
        printf("%dx%d=%d\n ",n,b,c);
        b++;
    }
    return 0;
}