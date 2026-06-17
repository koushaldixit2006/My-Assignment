/* This is a simple program to calculate the area of a rectangle */
#include <stdio.h>

int main() {
    int length,width;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    int area = length * width;
    printf("The area of the rectangle is %d\n", area);
    return 0;
}