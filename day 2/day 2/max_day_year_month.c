#include <stdio.h>

int main() {
    int day, month, year;

    // Read date in DD/MM/YYYY format
    scanf("%d/%d/%d", &day, &month, &year);

    // Check if year is in the valid range
    if (year > 1900 && year < 9999) {
        // Check if month is valid
        if (month >= 1 && month <= 12) {
            int maxDays;

            // Determine max days in the month
            if (month == 1 || month == 3 || month == 5 || month == 7 ||
                month == 8 || month == 10 || month == 12) {
                maxDays = 31;
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                maxDays = 30;
            } else if (month == 2) {
                // Check for leap year
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    maxDays = 29;
                } else {
                    maxDays = 28;
                }
            }

            // Now check if day is within valid range
            if (day >= 1 && day <= maxDays) {
                printf("Valid\n");
            } else {
                printf("Invalid\n");
            }

        } else {
            printf("Invalid\n");
        }
    } else {
        printf("Invalid\n");
    }

    return 0;
}
