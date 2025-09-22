//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){

    int a , b , c ;
    printf("Length of First Side: ");
    scanf("%d",&a);
    printf("Length of Second Side: ");
    scanf("%d",&b);
    printf("Length of Third Side: ");
    scanf("%d",&c);

    if ( a == b && a == c && b == c ){
        printf("Its an Equilateral Triangle");
    }
    
    else if ( a == b || a == c || b == c ){
        printf("Its an Isosceles Triangle");
    }
    else {
        printf("Its a Scalene Triangle");
    }

    return 0 ;
}