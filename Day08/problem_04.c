// Evaluate Power Function

#include <stdio.h>

// Power calculate karne ka recursive function
int power(int base, int exp) {
    if (exp == 0) {
        return 1; // Base case: kisi bhi number ki power 0 humesha 1 hoti hai
    }
    return base * power(base, exp - 1); // Recursive call
}

int main() {
    int base, exp;
    
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the exponent (power): ");
    scanf("%d", &exp);
    
    printf("%d raised to the power of %d is %d\n", base, exp, power(base, exp));
    
    return 0;
}