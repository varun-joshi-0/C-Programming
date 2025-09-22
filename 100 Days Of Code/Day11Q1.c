//Write a program to display the month name and number of days using switch-case for a given month number.


#include<stdio.h>
int main(){

    int n ;
    printf("Enter the Month Number: ");
    scanf("%d",&n);

    switch ( n ){
        case 1 :
            printf("Its January\n");
            printf("It has 31 Days");
            break;
        case 2 :
            printf("Its February\n");
            printf("It has 28/29 Days");
            break;
        case 3 :
            printf("Its March\n");
            printf("It has 31 Days");
            break;
        case 4 :
            printf("Its April\n");
            printf("It has 30 Days");
            break;
        case 5 :
            printf("Its May\n");
            printf("It has 31 Days");
            break;
        case 6 :
            printf("Its June\n");
            printf("It has 30 Days");
            break;
        case 7 :
            printf("Its July\n");
            printf("It has 31 Days");
            break;
        case 8 :
            printf("Its August\n");
            printf("It has 31 Days");
            break;
        case 9 :
            printf("Its September\n");
            printf("It has 30 Days");
            break;
        case 10 :
            printf("Its October\n");
            printf("It has 31 Days");
            break;
        case 11 :
            printf("Its November\n");
            printf("It has 30 Days");
            break;
        case 12 :
            printf("Its December\n");
            printf("It has 31 Days");
            break;
        default :
            printf("Invalid Input");

        
    }
    
    return 0 ;
}