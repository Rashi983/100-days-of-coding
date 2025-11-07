/* Q79:Perform diagonal traversal of a matrix:
#include <stdio.h>
int main() {
    int n, i, j;
    int matrix[10][10];
    printf("Enter the order of the matrix (rows = columns): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");
    for(int k = 0; k < n; k++) {
        i = 0;
        j = k;
        while(j >= 0 && i < n) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    for(int k = 1; k < n; k++) {
        i = k;
        j = n - 1;
        while(i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");
    return 0;
}
