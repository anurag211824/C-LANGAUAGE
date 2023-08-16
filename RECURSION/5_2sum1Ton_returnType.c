#include<stdio.h>
int sum(int n){
    if(n==0||n==0){
        return n;
    }
    else{
        return n+sum(n-1);
    }
}
int main(){
     int n;
    printf("enter a number n:");
    scanf("%d", &n);
    printf("the sum is %d", sum(n));
    return 0;
}