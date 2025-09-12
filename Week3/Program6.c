//Write a program to find the smallest of four numbers

#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the First No.: ");
    scanf("%d",&a);
    printf("Enter the Second No.: ");
    scanf("%d",&b);
    printf("Enter the Third No.: ");
    scanf("%d",&c);
    printf("Enter the Fourth No.: ");
    scanf("%d",&d);
    if (a<b && a<c && a<d){
        printf("First No. ie %d is the Smallest",a);
    }
    if (b<a && b<c && b<d){
        printf("Second No. ie %d is the Smallest",b);
    }
    if (d<b && d<c && d<a){
        printf("Fourth No. ie %d is the Smallest",d);
    }
    if (c<b && c<a && c<d){
        printf("Third No. ie %d is the Smallest",c);
    }

    return 0 ;
    
}
    
