//Write a program to input two numbers and find their HCF using while loop.

#include<stdio.h>
int main(){

    int a , b , i , c ;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    c = a + b;
    i = c ;

    while ( i <= c ){
        if ( a % i == 0 && b % i == 0){
            printf("%d\n",i);
            break;
        }
        i = i - 1;
    }
    
    return 0 ;
}