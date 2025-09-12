//WAP to check that a Number is divisible by 5 and 11.

#include<stdio.h>
int main(){

    int a ;
    printf("Enter the Number: ");
    scanf("%d",&a);

    if (a % 5 == 0 && a % 11 == 0){
        printf("True");
    }
    else {
        printf("False");
    }

    return 0 ;
}