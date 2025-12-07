#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join_date;
};

int main() {
    struct Employee emp1 = {"John Doe", 1001, {15, 6, 2023}};

    printf("Employee Details:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Joining Date: %d/%d/%d\n", emp1.join_date.day, emp1.join_date.month, emp1.join_date.year);

    return 0;
}