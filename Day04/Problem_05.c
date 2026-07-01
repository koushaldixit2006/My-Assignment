// Power function

#include <stdio.h>

// Simple function to calculate power
int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    int base, exp;
    
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exp);
    
    printf("Result = %d", power(base, exp));
    
    return 0;
}