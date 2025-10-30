#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3], result[20];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int mm;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    strncpy(month, date + 3, 2);
    month[2] = '\0';
    mm = atoi(month);

    sprintf(result, "%.2s-%s-%s", date, months[mm - 1], date + 6);
    printf("Formatted date: %s\n", result);
    return 0;
}
