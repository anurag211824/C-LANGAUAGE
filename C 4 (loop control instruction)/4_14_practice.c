#include<stdio.h>

int main(){
    int n,i,fact=1;
    printf("enter the number for factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        fact*=i;
        printf("%d!=%d\n",i,fact);
    }
    return 0;
}