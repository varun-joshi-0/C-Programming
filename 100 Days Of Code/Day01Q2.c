//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){

    int a , b , sum , diff , prod , div ;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    sum = a + b ;
    diff = a - b ;
    prod = a * b ;
    div = a / b ;

    printf("%d\n",sum);
    printf("%d\n",diff);
    printf("%d\n",prod);
    printf("%d",div);
    
    return 0 ;
}