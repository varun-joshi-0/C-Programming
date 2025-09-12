//WAP to Generate the Electricity Bill

#include<stdio.h>
int main(){

    int a , b , total ;
    printf("Enter Your Power Usage(in Units): ");
    scanf("%d",&a);
    total = 0 ;
    b = a ;

    if ( a <= 100){
        total = a * 3;
        total = total + 50 ;
    }
    if ( a >= 101 && a <= 300){
        total = 100 * 3 + ( a - 100 ) * 5;
        total = total + 150 ;
    }
    if ( a >= 301 && a <= 500 ){
        total = 100 * 3 + 200 * 5 + (( a - 300 ) * 7 )+ 250;
    }
    else {
        total = 100 * 3 + 200 * 5 + 200 * 7 + (( a - 500 ) * 9 )+ 500;

    }
    printf("Your Total Bill is: %d",total);
    

    return 0 ;
}