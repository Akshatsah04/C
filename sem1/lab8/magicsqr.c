#include <stdio.h>

int main() {
    int n, i, j;
    int sum_diag1 = 0, sum_diag2 = 0;
    int isMagic = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }


    for (i = 0; i < n; i++)
        sum_diag1 += matrix[i][i];


    for (i = 0; i < n; i++)
        sum_diag2 += matrix[i][n - i - 1];

    if (sum_diag1 != sum_diag2)
        isMagic = 0;

    for (i = 0; i < n && isMagic; i++) {
        int row_sum = 0, col_sum = 0;
        for (j = 0; j < n; j++) {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }
        if (row_sum != sum_diag1 || col_sum != sum_diag1) {
            isMagic = 0;
            break;
        }
    }

    if (isMagic)
        printf("The matrix is a Magic Square.\n");
    else
        printf("The matrix is NOT a Magic Square.\n");

    return 0;
}
