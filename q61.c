 /* Q61: Search for an element in array using linear search:
 #include <stdio.h>
int main() {
    int n, key, i, index = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i; 
            break;
        }
    }
        if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");
    
    return 0;
}
