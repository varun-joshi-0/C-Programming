//Write a program to print numbers from 1 to n.

#include<stdio.h>
int main(){

    int n , a = 1;
    printf("Enter the Limit: ");
    scanf("%d",&n);

    while (a <= n){
        printf("%d ",a);
        a = a + 1 ;
    }
    
    return 0 ;
}