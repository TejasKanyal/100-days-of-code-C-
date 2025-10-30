#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n; // To handle cases where k > n

    // Rotate array k times to the right
    for(i = 0; i < k; i++) {
        temp = arr[n - 1];  // store last element
        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];  // shift right
        }
        arr[0] = temp;  // move last element to front
    }

    printf("Array after right rotation by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
