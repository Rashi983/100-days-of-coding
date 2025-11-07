/* Q69:Find the second largest element in an array:
#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int first, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    first = second = -99999;  // can also use INT_MIN from <limits.h>
    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    if(second == -99999)
        printf("No second largest element (all elem if(second == -99999)
        printf("No second largest element (all elements are equal).\n");
    else
        printf("Second largest element: %d\n", second);

    return 0;
