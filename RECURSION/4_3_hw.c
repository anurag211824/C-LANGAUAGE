#include<stdio.h>/*to print 4 3 2 1 1 2 3 4 */
void dec_inc(int x){
    if(x==0){
        return;
    }
    else{
        printf("%d ",x);
        dec_inc(x-1);
        printf("%d ",x);
        return;

    }
}
int main(){
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    dec_inc(n);
    return 0;
}