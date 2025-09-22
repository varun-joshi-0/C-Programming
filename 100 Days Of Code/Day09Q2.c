/*
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/


#include<stdio.h>

int main(){
	float perc;
	
	printf("Enter your Percentage: ");
	scanf("%f",&perc);
	
	
	if (perc >= 90){
		printf("Grade A\n");
	}
	if (perc >= 80 && perc < 90){
		printf("Grade B\n");
	}
	if (perc >= 70 && perc < 80){
		printf("Grade C\n");
	}
	if (perc >= 60 && perc < 70){
		printf("Grade D\n");
	}
	if (perc < 60){
		printf("Grade F\n");
	}
	
	

    return 0 ;
    
    }