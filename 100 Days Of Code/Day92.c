#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- All Student Records ---\n");
    for (i = 0; i < 5; i++) {
        printf("Roll %d: Name=%s, Marks=%.2f\n",
               students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}