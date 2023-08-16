#include<stdio.h>

int main(){
    int a;
    printf("enter the value of a \n");
    scanf("%d",&a);
    // while loop -----> first check the condition then excute the code.
    while(a<10){
       
        printf("%d\n",a);
        a++;
    }
    // infinite loop example
    int b;
    printf("enter the value of b\n");
    scanf("%d",&b);
    while(b>10){
        
        printf("%d \n",b);
        b++;
    }
    return 0;
}