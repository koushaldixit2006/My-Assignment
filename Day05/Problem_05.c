// // program to print the Second largest element in an array using a function


// #include <stdio.h>

// int findSecondLargest(int arr[], int size) {
//     int largest = arr[0];
//     int secondLargest = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     return secondLargest;
// }

// int main() {
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     int arr[size];

//     printf("Enter %d integers: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int secondLargest = findSecondLargest(arr, size);
//     printf("Second largest element in the array is: %d\n", secondLargest);
//     return 0;
// }


#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // User se array ka size lena
    printf("Array me kitne elements daalne hain? : ");
    scanf("%d", &n);

    // Kam se kam 2 elements check karna
    if (n < 2) {
        printf("Bhai, second largest nikalne ke liye kam se kam 2 elements toh hone chahiye!\n");
        return 0; // Program yahin rok do
    }

    int arr[n];
    
    // User se array ki values lena
    printf("%d numbers enter karein:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // 2. Array ko chote se bade (ascending order) me sort karna
    // Iske liye hum Bubble Sort ka use kar rahe hain
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            // Agar pehla number dusre se bada hai, toh unki jagah aapas me badal do
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 3. Sorted array ko print karana
    printf("Sorted Array (Chote se Bada): ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 4. Last aur Last-1 element nikalna
    int largest = arr[n - 1];         // Last element
    int second_largest = arr[n - 2];  // Last se pehla element

    printf("\nLargest Element (Last) hai: %d\n", largest);
    printf("Second Largest Element (Last-1) hai: %d\n", second_largest);

    return 0;
}