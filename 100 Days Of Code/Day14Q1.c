//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){

    int n , a = 1 , sum = 0 ;
    printf("Enter the Limit: ");
    scanf("%d",&n);

    while (a <= n){
        sum = sum + a ;
        a = a + 1 ;
    }
    printf("The Total is: %d",sum);
    return 0 ;
}