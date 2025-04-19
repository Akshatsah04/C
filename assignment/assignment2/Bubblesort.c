#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort in descending order
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(arr[j] < arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("\nNumbers in descending order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}