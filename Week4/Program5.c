//Write a program to input two numbers and find their LCM.

#include<stdio.h>
int main(){

    int a , b , i = 1 , c ;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    c = a * b;

    while ( i <= c ){
        if ( i % a == 0 && i % b == 0){
            printf("%d\n",i);
            break;
        }
        i = i + 1;
    }
    
    return 0 ;
}