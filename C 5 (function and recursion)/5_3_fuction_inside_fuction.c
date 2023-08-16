#include <stdio.h>
void good_morning();
void good_afternoon();
void good_night();
int main()
{
    printf("wishing you\n");
    good_morning();
    return 0;
}
void good_morning()
{
    printf("good morning\n");
    good_afternoon();

}
void good_afternoon()
{
    printf("good after noon\n");
    good_night();
}
void good_night()
{
    printf("good night");
}