/*Program to calculate the Factorial of a number*/
#include <stdio.h>

int main() {
    int n, i, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is: %d\n", n, factorial);
    return 0;
}