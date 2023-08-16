#include<stdio.h>
void increasing(int x){
    if(x==0){
        return;
    }
    else{
        increasing(x-1);
        printf("%d ",x);
        return;

    }
}
int main(){ 
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}