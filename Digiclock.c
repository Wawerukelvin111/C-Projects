#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    while (1) {
        // Clear the screen
        system("clear");

        // Get current system time
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);
        localTime = localtime(&currentTime);

        // Display the time
        printf("Current Time: %02d:%02d:%02d\n", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

        // Wait for one second
        sleep(1);
    }

    return 0;
}
