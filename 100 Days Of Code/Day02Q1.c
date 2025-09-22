//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){

    int a , b , area , p ;
    printf("Enter the Length: ");
    scanf("%d",&a);
    printf("Enter the Breadth: ");
    scanf("%d",&b);

    area = a * b ;
    p = 2 * ( a + b );

    printf("%d\n",area);
    printf("%d",p);
    
    return 0 ;
}