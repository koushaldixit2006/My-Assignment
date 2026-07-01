// Traverse Array Using Pointers
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

   
    printf("\nArray elements are: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}