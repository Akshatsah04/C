#include <stdio.h>

int main() {
    int arr[10], i, num, found = 0;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number to search
    printf("Enter the number to search: ");
    scanf("%d", &num);

    // Linear Search
    for(i = 0; i < 10; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    // Output result
    if(found) {
        printf("Search Successful\n");
    } else {
        printf("Number is not present\n");
    }

    return 0;
}