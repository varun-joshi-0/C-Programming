#include <stdio.h>

enum Statuses {
    PENDING = 1,
    PROCESSING = 2,
    COMPLETED = 3,
    CANCELLED = 4
};

void print_status(enum Statuses s) {
    switch(s) {
        case PENDING: printf("PENDING: %d\n", s); break;
        case PROCESSING: printf("PROCESSING: %d\n", s); break;
        case COMPLETED: printf("COMPLETED: %d\n", s); break;
        case CANCELLED: printf("CANCELLED: %d\n", s); break;
        default: printf("Unknown status\n");
    }
}

int main() {
    for (int i = PENDING; i <= CANCELLED; i++) {
        print_status(i);
    }
    return 0;
}