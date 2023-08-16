#include <stdio.h>

int main() {
    int num, temp, last_digit, second_last_digit, new_num;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Extract the last two digits
    last_digit = num % 10;
    temp = num / 10;
    second_last_digit = temp % 10;

    // Check if the last two digits are not the same
    if (last_digit != second_last_digit) {
        // Swap the last two digits
        new_num = num - (last_digit * 1) - (second_last_digit * 10) + (last_digit * 10) 
        + (second_last_digit * 1);
        printf("Number with swapped last two digits: %d\n", new_num);
    } else {
        printf("The last two digits are the same. No swap required.\n");
    }

    return 0;
}
