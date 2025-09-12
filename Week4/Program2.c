//Program to print even numbers from 1 to 100 using while loop.

#include<stdio.h>
int main(){

    int a = 0;
    while (a <= 100){
        if (a % 2 == 0){
            printf("%d\n",a);
        }
        a = a + 1;
    }
    
    return 0 ;
}