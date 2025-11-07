/* Q77:Check if the elements on the diagonal of a matrix are distinct:
#include <stdio.h>
int main() {
    int n, i, j, k, isDistinct = 1;
    int matrix[10][10];
    printf("Enter the order of the matrix (rows = columns): ");
    scanf("%d", &n);
   printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(k = i + 1; k < n; k++) {
            if(matrix[i][i] == matrix[k][k]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }
    if(isDistinct)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
