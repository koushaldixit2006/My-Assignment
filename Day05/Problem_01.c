// Program to find the maximum element in an array

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
   
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element in the array is: %d\n", max);
    return 0;
}


// #include <stdio.h>

// // Yeh function array mein se sabse bada element find karega
// int findLargest(int arr[], int size) {
//     // Step 1: Hum maan lete hain ki array ka pehla element (index 0) sabse bada hai
//     int max = arr[0];

//     // Step 2: Loop shuru karte hain index 1 se lekar end tak
//     for (int i = 1; i < size; i++) {
//         // Step 3: Agar current element 'max' se bada hai, toh 'max' ko update kar do
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     // Aakhiri mein sabse bada number return kar dete hain
//     return max;
// }

// int main() {
//     // Ek sample array banate hain
//     int numbers[] = {25, 14, 89, 56, 92, 11};
    
//     // Array ka total size nikalne ka basic formula
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     // Function ko call karte hain aur result ko 'largestNumber' mein store karte hain
//     int largestNumber = findLargest(numbers, size);

//     // Final result print karte hain
//     printf("Is array mein sabse bada element hai: %d\n", largestNumber);

//     return 0;
// }