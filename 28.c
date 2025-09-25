#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; 

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in this range.\n");
    } else {
        for (i = 2; i <= n; i += 2) {
            product *= i;
        }

        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}
