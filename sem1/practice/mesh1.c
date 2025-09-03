#include <stdio.h>

int Prime(int num) {
    if (num <= 1){
        return 0;
    } 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (Prime(i) ==1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
