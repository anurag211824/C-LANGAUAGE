#include<stdio.h>

int main(){
    int marks1,marks2,marks3,marks4;
    // navie way to create 4 ints
    // marks1=34;
    // marks2=45;
    // marks3=35;
    // marks4=87;
    int marks[4];
    marks[0]=34;
    marks[1]=67;
    marks[2]=89;
    marks[3]=76;
    printf("%d,%d,%d,%d",marks[0],marks[1],marks[2],marks[3]);

    return 0;
}