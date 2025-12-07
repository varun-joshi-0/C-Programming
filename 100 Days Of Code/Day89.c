#include <stdio.h>

enum Colors {
    RED,
    BLUE = 5,
    GREEN
};

int main() {
    enum Colors c1 = RED;
    enum Colors c2 = BLUE;
    enum Colors c3 = GREEN;

    printf("RED assigned value: %d\n", c1);
    printf("BLUE assigned value: %d\n", c2);
    printf("GREEN implicitly assigned value (BLUE + 1): %d\n", c3);
    
    int red_val = RED;
    printf("The variable red_val (int) stores: %d\n", red_val);

    return 0;
}