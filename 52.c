#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  

 
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

 
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        if(i > 1) 
            printf("\n");
    }

    return 0;
}
