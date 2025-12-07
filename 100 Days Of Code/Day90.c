#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1;
    printf("Enter name: ");
    scanf("%s", p1.name);

    p1.gender = FEMALE;

    printf("Person Name: %s\n", p1.name);

    switch (p1.gender) {
        case MALE:
            printf("Gender: MALE\n");
            break;
        case FEMALE:
            printf("Gender: FEMALE\n");
            break;
        case OTHER:
            printf("Gender: OTHER\n");
            break;
    }

    return 0;
}