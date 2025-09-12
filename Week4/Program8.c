//Write a program to print number from 100 to 0 in reverse with gap of two.

#include<stdio.h>
int main(){

    int i = 100;
    
    while( i >= 0 ){
        printf("%d\n",i);
        i = i - 2;
    }
    
    return 0 ;
}