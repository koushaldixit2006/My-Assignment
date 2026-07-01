// Display n terms of Fibonacci series

#include <stdio.h>

// Fibonacci term nikalne ka recursive function
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case 1
    } else if (n == 1) {
        return 1; // Base case 2
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int terms;
    
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    printf("Fibonacci Series up to %d terms:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}