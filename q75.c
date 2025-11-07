/* Q75:Add two matrices:
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    int i, j;
    int A[10][10], B[10][10], Sum[10][10];
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    
    if(r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible. Dimensions do not match.\n");
        return 0;
}
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
