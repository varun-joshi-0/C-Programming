#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int get_days(enum Month month) {
    switch (month) {
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        case FEBRUARY:
            return 28;
        default:
            return 0;
    }
}

int main() {
    printf("JANUARY: %d days\n", get_days(JANUARY));
    printf("FEBRUARY: %d days\n", get_days(FEBRUARY));
    printf("MARCH: %d days\n", get_days(MARCH));
    printf("APRIL: %d days\n", get_days(APRIL));
    printf("MAY: %d days\n", get_days(MAY));
    printf("JUNE: %d days\n", get_days(JUNE));
    printf("JULY: %d days\n", get_days(JULY));
    printf("AUGUST: %d days\n", get_days(AUGUST));
    printf("SEPTEMBER: %d days\n", get_days(SEPTEMBER));
    printf("OCTOBER: %d days\n", get_days(OCTOBER));
    printf("NOVEMBER: %d days\n", get_days(NOVEMBER));
    printf("DECEMBER: %d days\n", get_days(DECEMBER));

    return 0;
}