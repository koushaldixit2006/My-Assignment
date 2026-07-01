// Anagram check 

#include<stdio.h>
#include <string.h>

// Anagram check karne ka function
int checkAnagram(char str1[], char str2[]) {
    // 1. Agar dono words ki length alag hai, toh wo anagram ho hi nahi sakte
    if (strlen(str1) != strlen(str2)) {
        return 0; // 0 matlab False
    }

    int count[256] = {0}; // Ek array banaya jisme sab letters ka count 0 rakha hai

    // 2. Pehle string ke letters aayenge toh count badhayenge (+1) 
    // Aur dusre string ke letters aayenge toh count ghatayenge (-1)
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++; // Pehle word ke letter ka count +1
        count[(int)str2[i]]--; // Dusre word ke letter ka count -1
    }

    // 3. Last me check karenge ki count array me sab 0 hai ya nahi
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // Agar koi bhi zero nahi hai, matlab letters match nahi hue
        }
    }

    return 1; // 1 matlab True (Sab letters barabar hain)
}

int main() {
    char str1[100], str2[100];

    // User se dono words input lena
    printf("Pehla word enter karein: ");
    scanf("%s", str1);

    printf("Dusra word enter karein: ");
    scanf("%s", str2);

    // Function call karke check karna
    if (checkAnagram(str1, str2)) {
        printf("\nHaa, '%s' aur '%s' Anagram hain!\n", str1, str2);
    } else {
        printf("\nNahi, '%s' aur '%s' Anagram nahi hain.\n", str1, str2);
    }

    return 0;
}