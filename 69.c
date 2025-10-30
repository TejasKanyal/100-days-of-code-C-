#include <stdio.h>

int main() {
    int arr[100], n, i;
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -999999; // Initialize to very small number

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -999999)
        printf("No second largest element (all elements are same).\n");
    else
        printf("The second largest element is: %d\n", second);

    return 0;
}
