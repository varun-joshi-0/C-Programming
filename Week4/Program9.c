//Write a program to count number of even and odd digits in a number.

#include<stdio.h>
int main(){

    int a , i , e , o;
    printf("Enter the Number: ");
    scanf("%d",&a);
    e = 0 ;
    o = 0 ;

    while (a > 0){
        i = a % 10;
        a = a / 10;
        if (i % 2 == 0){
            e++;
        }
        else {
            o++;
        }

    }
    printf("The Number of Even Digits are %d and Odd Digits are %d", e , o );
    
    return 0 ;
}