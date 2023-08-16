#include <stdio.h>

int main()
{
    int age;
    int vip_pass = 0;
    // vippass=1
    printf("enter your age \n");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || vip_pass == 1)
    // if((age<=70 && age>=18)|| !(vippass==1)) ! this is not operator which make corect statetment
    //  wrong and wrong statement true
    {
        printf("you are above 18 you and below 70, you can drive \n");
    }

    else
    {
        printf("you cannot drive");
    }

    return 0;
}