#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    hcf = gcd(a, b);
    lcm = (a * b) / hcf;  
    printf("LCM = %d\n", lcm);

    return 0;
}
