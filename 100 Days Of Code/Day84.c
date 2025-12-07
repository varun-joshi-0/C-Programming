#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void print_status_message(enum Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed due to an error.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
    }
}

int main() {
    print_status_message(SUCCESS);
    print_status_message(FAILURE);
    print_status_message(TIMEOUT);
    return 0;
}