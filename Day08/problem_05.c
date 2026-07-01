// Display Reverse String

#include <stdio.h>
#include <string.h>

// String ko reverse karne ka recursive function
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; // Base case: jab start index end se aage nikal jaye
    }
    
    // Swap start and end characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursive call with updated indexes
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str); // String bina space ke enter karni hogi
    
    int length = strlen(str);
    
    reverseString(str, 0, length - 1);
    
    printf("Reversed string is: %s\n", str);
    
    return 0;
}