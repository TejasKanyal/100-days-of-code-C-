#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, temp, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;                 
    digits = (int)log10(num);        
    first = num / pow(10, digits);   

    if (num < 10) {                  
        printf("Result: %d\n", num);
        return 0;
    }

    temp = num % (int)pow(10, digits);  
    temp = temp / 10;                   

    result = last * pow(10, digits) + temp * 10 + first;

    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}
