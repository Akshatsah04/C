#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int A[r1][c1], B[r2][c2];
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    int choice;
    printf("\n--- Menu ---\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose (of first matrix)\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: 
            if (r1 == r2 && c1 == c2) {
                int C[r1][c1];
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        C[i][j] = A[i][j] + B[i][j];
                    }
                }
                printf("Result of Addition:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Addition not possible (dimension mismatch).");
            }
            break;
        case 2: 
            if (r1 == r2 && c1 == c2) {
                int C[r1][c1];
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        C[i][j] = A[i][j] - B[i][j];
                    }
                }
                printf("Result of Subtraction:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Subtraction not possible (dimension mismatch).\n");
            }
            break;
        case 3:
            if (c1 == r2) {
                int C[r1][c2];
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        C[i][j] = 0;
                        for (k = 0; k < c1; k++) {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
                printf("Result of Multiplication:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Multiplication not possible (c1 != r2).\n");
            }
            break;
        case 4: 
            printf("Transpose of first matrix:\n");
            for (i = 0; i < c1; i++) {
                for (j = 0; j < r1; j++) {
                    printf("%d ", A[j][i]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}