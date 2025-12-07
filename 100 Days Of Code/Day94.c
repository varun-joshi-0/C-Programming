#include <stdio.h>

struct Point {
    int x;
    int y;
};

void print_point(struct Point p) {
    printf("Point Coordinates: (x=%d, y=%d)\n", p.x, p.y);
}

int main() {
    struct Point p1 = {10, 20};
    print_point(p1);
    return 0;
}