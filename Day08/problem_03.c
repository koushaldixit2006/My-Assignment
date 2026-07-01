// Calculate Sum of N Numbers

#include <stdio.h>

// Sum nikalne ka recursive function
int sumOfN(int n) {
    if (n == 0) {
        return 0; // Base case
    }
    return n + sumOfN(n - 1); // Recursive call
}

int main() {
    int num;
    
    printf("Enter a positive integer N: ");
    scanf("%d", &num);
    
    printf("Sum of first %d numbers is %d\n", num, sumOfN(num));
    
    return 0;
}