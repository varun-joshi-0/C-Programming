#include<stdio.h>
int main(){
    float l,b,area,p;
    printf("Enter the Length of Rectangle: ");
    scanf("%f",&l);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%f",&b);
    area = l * b;
    p = 2 * (l + b);
    printf("The Area of Rectangle: %f",area);
    printf("\nThe Perimeter of Rectangle: %f",p);
    return 0 ;

}