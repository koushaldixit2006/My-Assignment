// Array Sum Using Pointers

#include <stdio.h>

int main() {
    int n;
    

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n]; 
    int sum = 0;
    int *ptr = arr; 

   
    printf("Enter %d elements for the array: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    for(int i = 0; i < n; i++) {
        sum = sum + *(ptr + i);
    }

    printf("Sum of array elements is: %d\n", sum);
    
    return 0;
}