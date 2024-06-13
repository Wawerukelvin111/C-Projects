#include <stdio.h>
#include <time.h>

int main() {
    // Get current time
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    
    // Get current month and year
    int month = now->tm_mon + 1; // Adjust for 0-based indexing
    int year = now->tm_year + 1900; // Years since 1900

    // Get number of days in the month
    int daysInMonth;
    switch(month) {
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                daysInMonth = 29; // Leap year
            else
                daysInMonth = 28;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    // Print calendar header
    printf("   %d/%d\n", month, year);
    printf(" Su Mo Tu We Th Fr Sa\n");

    // Calculate the day of the week for the first day of the month
    struct tm firstDay = {0};
    firstDay.tm_year = now->tm_year;
    firstDay.tm_mon = now->tm_mon;
    firstDay.tm_mday = 1;
    mktime(&firstDay);
    int startingDay = firstDay.tm_wday;

    // Print leading spaces
    for(int i = 0; i < startingDay; i++) {
        printf("   ");
    }

    // Print the days of the month
    for(int day = 1; day <= daysInMonth; day++) {
        printf("%3d", day);
        // Start a new line after Saturday
        if ((day + startingDay) % 7 == 0 || day == daysInMonth) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return 0;
}
