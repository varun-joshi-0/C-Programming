#include<stdio.h>
int main(){
    float r,area,cir;
    printf("Enter the radius of the Circle: ");
    scanf("%f",&r);
    area = 3.14 * r * r  ;
    cir = 2 * 3.14 * r;
    printf("The Area of Circle: %f",area);
    printf("\nThe Circumference of Circle: %f",cir);
    return 0;

}