// Program to Count Words in a given string

#include <stdio.h>

int main() {
    char str[100];
    int i, wordCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    // Count words
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ') {
            wordCount++;
        }
    }

    // If string is not empty, increment word count by 1
    if(str[0] != '\0') {
        wordCount++;
    }

    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}