// Factorial number using only function

#include <stdio.h>

// Simple function to calculate factorial
int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factorial = %d", fact(num));
    
    return 0;
}