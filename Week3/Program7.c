//Program to input age and check whether the person is eligible to vote or not.
#include<stdio.h>

int main(){
	int a ;
	printf("Enter Your Age: ");
	scanf("%d",&a);
	if (a >= 18){
		printf("You are eligible to Vote");
	}
	else {
		printf("You are not eligible to Vote");
	}



    return 0 ;
    
    }