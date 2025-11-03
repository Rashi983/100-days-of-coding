/*Q66:Insert an element in a sorted array at the appropriate position:
#include <stdio.h>

int main() {
    int n, x, i, j;

    // Input size of the array
    scanf("%d", &n);
    int arr[n + 1]; 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] > x) {
            break;
        }
    }
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = x;
    n++; 
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

