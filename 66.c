#include <stdio.h>

int main() {
    int arr[100], n, i, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find correct position for the new element
    for(i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];  // Shift elements right
    }

    arr[i + 1] = key;  // Insert element
    n++;               // Increase array size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
