#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

void display_role_message(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Administrator. Full access granted.\n");
            break;
        case USER:
            printf("Welcome, Standard User. Limited access available.\n");
            break;
        case GUEST:
            printf("Welcome, Guest. Read-only access.\n");
            break;
        default:
            printf("Unknown role.\n");
    }
}

int main() {
    display_role_message(ADMIN);
    display_role_message(USER);
    display_role_message(GUEST);
    return 0;
}