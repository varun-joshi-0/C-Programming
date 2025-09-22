//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main(){
    
    int a , b , sum ;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);

    sum = a + b;

    printf("The Sum of the Numbers are %d",sum);

    
    return 0;
}