/* This is a simple program to Swap two numbers */
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, a = %d and b = %d\n", a, b);
    return 0;
}