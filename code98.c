#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            lastSpace = i;

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || str[i - 1] == ' ')
            printf("%c.", str[i]);
    }

    printf("%s\n", &str[lastSpace + 1]);
    return 0;
}
