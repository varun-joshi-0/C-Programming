//Write a program to input a number and check whether its a armstrong number or not
#include<stdio.h>
#include<math.h>

int main() {
	int n,i,a,j,z;
    float p,sum ;
	p = 0;
	printf("Enter the No.: ");
	scanf("%d",&n);
	a = n;
	i = n;
	sum = 0;
	
	while (a>0){
	a = a / 10;
	p = p + 1;
	}
	while (i>0){
	j = i % 10;
	
	sum = sum + pow(j,p) ;
	i = i / 10;
	}
	if (sum == n){
	printf("The Given Number is a Armstrong.\n");
	}
	else{
	printf("The Given Number is NOT a Armstrong.\n");
	}
	
	return 0 ;
    
}