#include<stdio.h>
int add(int x ,int y){
    return x+y;
}
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    int b;
    printf("enter b:");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("the sum is %d",sum);
    return 0;
}