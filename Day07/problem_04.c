// Largest Element Using Pointers

#include <stdio.h>

int main() {
    int n;
    
   
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n]; 
    int *ptr = arr;
    
    
    printf("Enter %d elements for the array: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = *ptr; // Pehle element ko max maan liya

    
    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Largest element is: %d\n", max);
    
    return 0;
}