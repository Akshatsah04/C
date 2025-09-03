#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    float trace = 0, norm = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            norm += matrix[i][j] * matrix[i][j];
            if (i == j)
                trace += matrix[i][j];
        }
    }

    norm = sqrt(norm);

    printf("Trace of the matrix = %.2f\n", trace);
    printf("Norm of the matrix = %.2f\n", norm);

    return 0;
}
