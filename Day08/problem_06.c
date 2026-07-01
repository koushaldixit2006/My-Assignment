// Calculate Palindrome Check

#include <stdio.h>
#include <string.h>

// Palindrome check karne ka recursive function
int checkPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; // Agar pointers cross kar gaye, matlab palindrome hai (Base case)
    }
    
    if (str[start] != str[end]) {
        return 0; // Agar match nahi kiye, toh palindrome nahi hai
    }
    
    // Recursive call for next characters
    return checkPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string to check for palindrome: ");
    scanf("%s", str);
    
    int length = strlen(str);
    
    // Function return karega 1 (True) ya 0 (False)
    if (checkPalindrome(str, 0, length - 1)) {
        printf("%s is a Palindrome.\n", str);
    } else {
        printf("%s is NOT a Palindrome.\n", str);
    }
    
    return 0;
}