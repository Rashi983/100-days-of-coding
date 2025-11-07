/*Q67:Insert an element in an array at a given position:
#include <stdio.h>

int main() {
    int n, i, pos, value;

    // Input array size
    scanf("%d", &n);
    int arr[n + 1];  // Extra space for new element

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and value to insert
    scanf("%d %d", &pos, &value);

    // Shift elements to the right from the given position
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value at the given position
    arr[pos] = value;

    // Increase array size
    n++;

    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
