#include <stdio.h>

int main() {
    // Get the anniversary date from the user
    char anniversary_date[11];
    printf("Enter the Date: ");
    scanf("%s", anniversary_date);

    // Extract the year from the anniversary date
    int anniversary_year = 0;
    for (int i = 6; i < 10; i++) {
        anniversary_year = anniversary_year * 10 + (anniversary_date[i] - '0');
    }

    // Check whether the anniversary year is a leap year or not
    int is_leap_year = 0;
    if (anniversary_year % 4 == 0) {
        if (anniversary_year % 100 == 0) {
            if (anniversary_year % 400 == 0) {
                is_leap_year = 1;
            } else {
                is_leap_year = 0;
            }
        } else {
            is_leap_year = 1;
        }
    } else {
        is_leap_year = 0;
    }

    // Print whether the anniversary year is a leap year or not
    if (is_leap_year) {
        printf("Given Anniversary Year: Leap Year.\n");
        // If the year is a leap year, print the next anniversary
        int next_anniversary_year = anniversary_year + 4;
        char next_anniversary_date[11];
        sprintf(next_anniversary_date, "%c%c/%c%c/%d",
                anniversary_date[0], anniversary_date[1],
                anniversary_date[3], anniversary_date[4],
                next_anniversary_year);
        printf("Next Anniversary Date: %s\n", next_anniversary_date);
    } else {
        printf("Given Anniversary Year: Non Leap Year.\n");
        // If the year is not a leap year, print the previous anniversary
        int previous_anniversary_year = anniversary_year - 4;
        char previous_anniversary_date[11];
        sprintf(previous_anniversary_date, "%c%c/%c%c/%d",
                anniversary_date[0], anniversary_date[1],
                anniversary_date[3], anniversary_date[4],
                previous_anniversary_year);
        printf("Previous Anniversary Date: %s\n", previous_anniversary_date);
    }

    return 0;
}
