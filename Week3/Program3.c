//Write a program to input cost price and selling price and check whether there is a profit, loss or nothing.

#include<stdio.h>
int main(){

    int cp , sp;
    printf("Enter the Cost Price: \n");
    scanf("%d",&cp);
    printf("Enter the Selling Price: \n");
    scanf("%d",&sp);

    if ( cp > sp ){
        printf("There will be a Loss");
    }
    if ( sp > cp ){
        printf("There will be a Profit");
    }
    if ( cp == sp ) {
        printf("Neither Profit nor Loss");
    }
    
    return 0 ;
}