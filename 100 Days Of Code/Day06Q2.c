//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){

    int n ;

    printf("Enter the Number: ");
    scanf("%d",&n);

    if (n >= 0){
        if (n > 0){
            printf("The Number is Positive");
        }
        else {
            printf("Its Zero");
        }
    }
    else if (n < 0){
        printf("The Number is Negative");
    }
    
    return 0 ;
}