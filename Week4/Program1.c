//WAP to print the Reverse of the input number like for 102 will be 201

#include<stdio.h>
int main(){
    int a ,d ,n,sum ,n1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    sum = 0;
    n1 = n;
    while (n > 0){
        
        d = n % 10 ;
        sum = sum*10+d;
        n = n / 10 ;
        

    }
    printf("Reverse is: %d",sum);
    return 0 ;
}
