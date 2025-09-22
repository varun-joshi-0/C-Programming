//Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main(){

    int n ;
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    if (n%2 == 0){
        printf("The Given Number is Even");
    }
    else {
        printf("The Given Number is Odd");
    }

    return 0 ;
}