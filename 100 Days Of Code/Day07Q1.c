//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){

    int year ;
    printf("Enter the Year: ");
    scanf("%d",&year);

    if ( year % 100 == 0 ){
        if ( year % 400 == 0 ){
            printf("Its a Leap Year");
        }
        else {
            printf("Its Not a Leap Year");
        }
    }
    else {
        if ( year % 4 == 0 ){
            printf("Its a Leap Year");
        }
        else {
            printf("Its Not a Leap Year");
        }
    }
    
    return 0 ;
}