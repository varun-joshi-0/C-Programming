//Write a program to input a number and then compare it and print if palindrome or not.

#include<stdio.h>
#include<math.h>
int main(){

    int a , b , c , p , i ;
    float nn , z;
    printf("Enter the Number: ");
    scanf("%d",&a);
    b = a ;
    c = a ;
    nn = 0 ;
    p = 0 ;

    while (b > 0){
        b = b / 10 ;
        p = p + 1 ;
    }
    
    while (c > 0){
        i = c % 10;
        c = c / 10;
        z =  pow(10,p-1);
        nn = nn + i * z;
        p = p - 1;
    }
    if (a == nn){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0 ;
}