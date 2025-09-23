#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;               // 1 hour = 3600 seconds
    minutes = (total_seconds % 3600) / 60;      // Remaining minutes
    seconds = total_seconds % 60;               // Remaining seconds

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}


// %02d - this means width here minimum width is of 2 characters like 05,12,ect like this without %02d it will be like 2,5,6 etc
// %04d , etc any number will have a width like above here it will be 0002,0004,0005 etc  