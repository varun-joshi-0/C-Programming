//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number from 1 to 7: ");
    scanf("%d", &n);

    switch ( n ) {
        case 1:
            printf("Its Monday");
            break;
        case 2:
            printf("Its Tuesday");
            break;
        case 3:
            printf("Its Wednesday");
            break;
        case 4:
            printf("Its Thursday");
            break;
        case 5:
            printf("Its Friday");
            break;
        case 6:
            printf("Its Saturday");
            break;
        case 7:
            printf("Its Sunday");
            break;
        default:
            printf("Invalid Input");
            break;
    }

    return 0;
}
