//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
int main(){

    int p , t , r , si ;
    printf("Enter the Principal: ");
    scanf("%d",&p);
    printf("Enter the Rate: ");
    scanf("%d",&r);
    printf("Enter the Time: ");
    scanf("%d",&t);

    si = ( p * t * r ) / 100 ;

    printf("Simple Interest: %d", si);
    
    return 0 ;
}