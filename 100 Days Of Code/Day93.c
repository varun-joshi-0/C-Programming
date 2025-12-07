#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[3] = {
        {"Alice", 101, 95.5},
        {"Bob", 102, 88.0},
        {"Charlie", 103, 98.2}
    };
    int i;
    int highest_index = 0;
    float max_marks = 0;

    for (i = 0; i < 3; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            highest_index = i;
        }
    }

    printf("Student with the Highest Marks:\n");
    printf("Name: %s\n", students[highest_index].name);
    printf("Roll No: %d\n", students[highest_index].roll_no);
    printf("Marks: %.2f\n", students[highest_index].marks);

    return 0;
}