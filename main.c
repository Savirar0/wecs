#include <stdio.h>
#include <time.h>
#include <windows.h>

// Function to convert minutes to wecs
float convertToWecs(int minutes) {
    return (minutes * 100.0) / 60.0;
}

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    int hours, minutes;
    float wecs;

    while(1) {
        // Get the current time
        time (&rawtime);
        timeinfo = localtime (&rawtime);
        hours = timeinfo->tm_hour;
        minutes = timeinfo->tm_min;

        // Convert minutes to wecs
        wecs = convertToWecs(minutes);

        // Clear the console
        system("cls");

        // Print the time in hours:wecs format
        printf("The current time in hours:wecs format is %02d:%.2f\n", hours, wecs);

        // Wait for 1 second
        Sleep(1000);
    }

    return 0;
}
