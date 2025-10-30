#include <stdio.h>

int main() {
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
            newStr[j++] = c;
    }
    newStr[j] = '\0';

    printf("String without vowels: %s\n", newStr);
    return 0;
}
