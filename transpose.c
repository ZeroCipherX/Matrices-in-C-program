#include <stdio.h>
int main() {
    int arr_1[3][3];
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element of A%d%d: ", i + 1, j + 1);
            scanf("%d", &arr_1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr_1[i][j]);
        }
        printf("\n");
    }
    int brr[3][3];
    for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
    brr[i][j]=arr_1[j][i];
    }
    printf("\n");
    }
    printf("Transpose of Matrix A is : \n");
    for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
    printf("%d\t",brr[i][j]);
    }
    printf("\n");
}    return 0;
}
