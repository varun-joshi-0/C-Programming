#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice, a, b, result;

    printf("1: ADD, 2: SUBTRACT, 3: MULTIPLY\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    if (choice < ADD || choice > MULTIPLY) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d\n", result);
            break;
    }

    return 0;
}