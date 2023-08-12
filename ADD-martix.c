#include <stdio.h>

int main() {
    int arr_1[3][3];
    int arr_2[3][3];
    int arr_3[3][3];
    int i, j, k;

    printf("Enter elements of matrix A:\n");
    for(i = 0; i <= 2; i++) {
        for(j = 0; j <= 2; j++) {
            printf("Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &arr_1[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i = 0; i <= 2; i++) {
        for(j = 0; j <= 2; j++) {
            printf("Enter element b%d%d: ", i+1, j+1);
            scanf("%d", &arr_2[i][j]);
        }
    }

    // Matrix addition
    for(i = 0; i <= 2; i++) {
        for(j = 0; j <= 2; j++) {
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    printf("Matrix A:\n");
    for(i = 0; i <= 2; i++) {
        for(j = 0; j <= 2; j++) {
            printf("%d\t", arr_1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for(i = 0; i <= 2; i++) {
        for(j = 0; j <= 2; j++) {
            printf("%d\t", arr_2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix C (Sum of A and B):\n");
    for(i = 0; i <= 2; i++) {
        for(j = 0; j <= 2; j++) {
            printf("%d\t", arr_3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
