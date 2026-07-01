/*Program is a check the number is Prime or not*/
#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle the case when the number is less than 2
    if(num < 2) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to num/2
        for(i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}