#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d (Position %d)\n", i, i+1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }

    return 0;
}
