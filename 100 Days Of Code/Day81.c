#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    printf("Day: SUNDAY, Value: %d\n", SUNDAY);
    printf("Day: MONDAY, Value: %d\n", MONDAY);
    printf("Day: TUESDAY, Value: %d\n", TUESDAY);
    printf("Day: WEDNESDAY, Value: %d\n", WEDNESDAY);
    printf("Day: THURSDAY, Value: %d\n", THURSDAY);
    printf("Day: FRIDAY, Value: %d\n", FRIDAY);
    printf("Day: SATURDAY, Value: %d\n", SATURDAY);
    return 0;
}