//Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>

int main(){

    int n , z ;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("2\n3\n");

    for ( z = 4 ; z <= n ; z++){
        int prime = 0 ;
        for(int i = 2 ; i < z ; i++){
            if ( z % i == 0 ){
                prime = 1;
            }
            
        }

        if (prime){
        }
        else {
            printf("%d\n",z);
        }
    }


    return 0 ;
}
