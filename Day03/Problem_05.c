/*count all digits in a number*/
#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle the case when the number is 0
    if(num == 0) {
        count = 1; // 0 has one digit
    } else {
        // Count digits for non-zero numbers
        while(num != 0) {
            num /= 10; // Remove the last digit
            count++; // Increment the count
        }
    }

    printf("The number of digits in the entered integer is: %d\n", count);
    return 0;
}