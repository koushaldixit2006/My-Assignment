//  using function to find Maximum number among two numbers

#include<stdio.h>

int max(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = max(num1, num2);

    printf("The maximum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}