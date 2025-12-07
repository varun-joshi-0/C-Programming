#include <stdio.h>

struct Car {
    char model[30];
    int year;
};

void modify_car(struct Car *c_ptr) {
    c_ptr->year = 2024;
    printf("Car year modified to 2024.\n");
}

int main() {
    struct Car my_car = {"Civic", 2020};
    struct Car *car_ptr = &my_car;

    printf("Original Year: %d\n", car_ptr->year);
    
    modify_car(car_ptr);

    printf("New Year (using -> operator): %d\n", car_ptr->year);

    return 0;
}