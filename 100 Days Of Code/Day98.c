#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Item {
    int id;
    char name[20];
    float price;
};

bool are_identical(struct Item item1, struct Item item2) {
    if (item1.id != item2.id) {
        return false;
    }
    if (item1.price != item2.price) {
        return false;
    }
    if (strcmp(item1.name, item2.name) != 0) {
        return false;
    }
    return true;
}

int main() {
    struct Item a = {1, "Laptop", 1200.00};
    struct Item b = {1, "Laptop", 1200.00};
    struct Item c = {2, "Mouse", 25.00};

    if (are_identical(a, b)) {
        printf("Item A and Item B are identical.\n");
    } else {
        printf("Item A and Item B are NOT identical.\n");
    }

    if (are_identical(a, c)) {
        printf("Item A and Item C are identical.\n");
    } else {
        printf("Item A and Item C are NOT identical.\n");
    }

    return 0;
}