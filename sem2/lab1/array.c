#include <stdio.h>
int main() {
    int arr[100]; 
    int num, o, p, val, i, j, temp;
    printf("Enter number of elements, not more than 100:  ");
    scanf("%d", &num);
    printf("Enter %d elements:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Select from the following:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Update\n");
    printf("4. Reverse\n");
    printf("5. Display\n");
    printf("Enter your option: ");
    scanf("%d", &o);
    switch (o) {
        case 1: 
            printf("Enter index value 0 to %d: ", num-1);
            scanf("%d", &p);
            printf("Enter value to insert: ");
            scanf("%d", &val);
            for (i = num; i >= p; i--) {
                arr[i] = arr[i-1];
            }
            arr[p] = val;
            num++;
            printf("Changed Array: ");
            for (i = 0; i < num; i++){
                printf("%d ", arr[i]);
            }    
            printf("\n");
            break;
        case 2: 
            printf("Enter index value 0 to %d: ", num-1);
            scanf("%d", &p);
            for (i = p; i < num; i++) {
                arr[i] = arr[i+1];
            }
            num--;
            printf("Changed Array: ");
            for (i = 0; i < num; i++){
                printf("%d ", arr[i]);
            } 
            printf("\n");
            break;
        case 3:
            printf("Enter index value 0 to %d: ", num-1);
            scanf("%d", &p);
            printf("Enter new value: ");
            scanf("%d", &val);
            arr[p] = val;
            printf("Updated Array: ");
            for (i = 0; i < num; i++){
                printf("%d ", arr[i]);
            } 
            printf("\n");
            break;
        case 4:
            for (i = 0, j = num-1; i < j; i++, j--) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            printf("Reversed Array: ");
            for (i = 0; i < num; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 5: 
            printf("Array elements: ");
            for (i = 0; i < num; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
    }
    return 0; 
}