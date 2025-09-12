//Write a program to input maximum limit and find all numbers divisible by 5 and 7.

#include<stdio.h>
int main(){

    int a , i ;
    printf("Enter the Limit: ");
    scanf("%d", &a);
    i = 0;
    while (i<=a){
        if ( i % 5 == 0 && i % 7 == 0 ){
            printf("%d\n",i);
        }
        i = i + 1;
    }

    
    return 0 ;
}