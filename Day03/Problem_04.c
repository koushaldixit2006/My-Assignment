/*Reverse of given four digit number*/
#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter a four-digit integer: ");
    scanf("%d", &num);

    // Check if the number is a four-digit number
    if(num < 1000 || num > 9999) {
        printf("Please enter a valid four-digit integer.\n");
        return 1; // Exit the program with an error code
    }

    while(num != 0) {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    printf("The reversed number is: %d\n", reversed);
    return 0;
}