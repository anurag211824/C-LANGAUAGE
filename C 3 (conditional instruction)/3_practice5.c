#include<stdio.h>

int main(){
    char ch;
    printf("enter the character \n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97){

        printf("it is a lower case");
    }
    else{printf("it is a not a  lowercase");}
    return 0;
}