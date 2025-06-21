#include <stdio.h>

int main() {
    int month, day;
    printf("Enter the month:day (e.g., 3:15): ");
    scanf("%d:%d", &month, &day);

    int valid = 0;
    if (month >= 1 && month <= 12) {
        // Days in each month (index 0 unused)
        int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        if (day >= 1 && day <= days_in_month[month]) {
            valid = 1;
        }
    }

    if (valid) {
        printf("%d:%d is a valid date\n", month, day);
    } else {
        printf("%d:%d is not a valid date\n", month, day);
    }
    return 0;
}
