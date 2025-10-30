#include <stdio.h>

int main() {
    long num;
    int digit, freq[10] = {0};
    int max = 0, mostFrequentDigit = 0;

    printf("Enter an integer: ");
    scanf("%ld", &num);

    if(num < 0)
        num = -num;  // handle negative numbers

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is %d (appears %d times).\n", mostFrequentDigit, max);

    return 0;
}
