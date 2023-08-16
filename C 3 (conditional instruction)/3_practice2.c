// write a programe to find out wheather a student is pass or fail
#include <stdio.h>

int main()
{
    int electronics;
    int maths;
    int chemistry;
    int mechanical;
    printf("enter your electronics marks\n");
    scanf("%d", &electronics);
    printf("enter your maths marks\n");
    scanf("%d", &maths);
    printf("enter your chemistrty marks \n");
    scanf("%d", &chemistry);
    printf("enter your mechanical marks \n");
    scanf("%d", &mechanical);
    float total_percentage = (electronics + maths + chemistry + mechanical) / 4;
    if (total_percentage < 40 || electronics < 33 || maths < 33 || chemistry < 33 || mechanical < 33)
    {
        printf("your total percentage is %f and you are fail", total_percentage);
    }
    else
    {
        printf("your total percentage is %f and you are pass", total_percentage);
    }
    return 0;
}