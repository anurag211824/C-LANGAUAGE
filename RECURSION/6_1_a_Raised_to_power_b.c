#include<stdio.h>
int power( int x, int y){
    int p=1;
    for(int i=1;i<=y;i++){
        p=p*x;
    }
    return p;
}
int main(){
    int x,y;
    printf("enter base:");
    scanf("%d",&x);
    printf("enter power:");
    scanf("%d",&y);
    printf("required answer is %d:",power(x,y));
    return 0;
}