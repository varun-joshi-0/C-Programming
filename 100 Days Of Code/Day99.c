#include <stdio.h>
#include <stdlib.h>

struct Data {
    int value;
    char label[10];
};

int main() {
    struct Data *ptr;

    ptr = (struct Data*)malloc(sizeof(struct Data));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    ptr->value = 42;
    sprintf(ptr->label, "Answer");

    printf("Dynamically Allocated Data:\n");
    printf("Value: %d\n", ptr->value);
    printf("Label: %s\n", ptr->label);

    free(ptr);
    return 0;
}