#include <stdio.h>

int main() {
    int n;
    int A[10][10], B[10][10], add[10][10], mul[10][10];

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    

    //getting input in matrices a
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    //getting input in matrices b
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            add[i][j] = A[i][j] + B[i][j];
        }
    }

    // Initialize multiplication matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mul[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }
   
    // Displaying Results a + b
    printf("\nMatrix Addition Result:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
    // Displaying Results a * b
    printf("\nMatrix Multiplication Result:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
