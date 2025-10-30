#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    char *word_start = NULL;
    char *temp = str;

    printf("Enter a sentence: ");
    gets(str);

    while (*temp) {
        if ((word_start == NULL) && (*temp != ' '))
            word_start = temp;
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
