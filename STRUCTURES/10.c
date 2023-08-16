#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
typedef struct date{
    int day;
    int month;
    int year;
}date;
date u,a;
// date------>4/8/2002
u.day=4;
u.month=8;
u.year=2002;

// date------>17/8/2002
a.day=4;
a.month=8;
a.year=2002;
date c=a;

bool flag=true;

if(a.day!=c.day)flag=false;
if(a.month!=c.month) flag=false;
if(a.year!=c.year) flag=false;

if (flag==false)
printf("thde dates are different");

else{
    printf("thde dates are same");
}

    return 0;
}