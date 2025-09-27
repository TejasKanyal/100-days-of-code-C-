#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digits = 0, sum = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
