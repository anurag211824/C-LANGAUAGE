#include<stdio.h>
int fibo(int x){
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fibo(x-1)+fibo(x-2);
    }
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",fibo(n));

    return 0;
}