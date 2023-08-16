#include<stdio.h>
int factorial(int x){
    if(x==0||x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int n;
    printf("enter the value of n fot its factorial:");
    scanf("%d",&n);
    int a =factorial(n);
    printf("factorial value is: %d",a);
    return 0;
}