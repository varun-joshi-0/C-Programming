//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the Temperature(in Celsius): ");
    scanf("%f",&c);
    f = (9 * c)/5 + 32;
    printf("Temperature in Fahrenheit: %f",f);
    return 0 ;
}