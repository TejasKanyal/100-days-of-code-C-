#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter your full name: ");
    gets(str);

    printf("Initials: ");
    printf("%c", str[0]);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            printf(".%c", str[i + 1]);
    }
    printf("\n");
    return 0;
}
