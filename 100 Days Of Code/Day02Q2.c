//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){

    int r ;
    float area , c ;
    printf("Enter the Radius: ");
    scanf("%d",&r);
    
    area = 3.14 * r * r ;
    c = 2 * 3.14 * r ;

    printf("%f\n",area);
    printf("%f",c);
    
    return 0 ;
}