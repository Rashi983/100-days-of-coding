/* Q70:Rotate an array to the right by k positions:
#include <stdio.h>
int main() {
    int n, k, i;
    int arr[100], temp[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
