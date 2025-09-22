//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main(){

    int a = 1 , n , prod = 1 ;
    printf("Enter the Limit: ");
    scanf("%d",&n);

    while (a <= n ){
        if (a % 2 == 0){
            prod = prod * a ;
            
        }
        a++;
    }
    printf("The Total is: %d",prod);

    return 0 ;
}