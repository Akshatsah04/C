#include <stdio.h>
int main() {
    int r, c, i, j, k, temp;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int n = r * c;
    int flat[n], idx = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            flat[idx++] = arr[i][j];
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (flat[j] > flat[j + 1]) {
                temp = flat[j];
                flat[j] = flat[j + 1];
                flat[j + 1] = temp;
            }
        }
    }
    idx = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            arr[i][j] = flat[idx++];
        }
    }
    
}