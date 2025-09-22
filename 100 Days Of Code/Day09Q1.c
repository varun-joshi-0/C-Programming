//Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>
int main(){
    float a , b , c , D , x1 , x2;
    printf("Format of Quadratic Equation: ax^2 + bx + c");
    printf("\nEnter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    D = sqrt((b * b) - 4 * a * c);
    x1 = (- b + D) / (2 * a);
    x2 = (- b - D) / (2 * a);
    printf("The roots of the given Quadratic Equation is: %f and %f ", x1 , x2 );
    return 0 ;
}