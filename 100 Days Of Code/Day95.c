#include <stdio.h>

struct Result {
    int sum;
    int product;
};

struct Result calculate_stats(int a, int b) {
    struct Result r;
    r.sum = a + b;
    r.product = a * b;
    return r;
}

int main() {
    struct Result stats = calculate_stats(5, 8);

    printf("Sum: %d\n", stats.sum);
    printf("Product: %d\n", stats.product);

    return 0;
}