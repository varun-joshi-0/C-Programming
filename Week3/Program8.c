//Write a program to input student marks of five subjects and than calculate the percentage, CGPA and grade.

#include<stdio.h>

int main(){
	int a,b,c,d,e,sap;
	float cgpa;
	
	printf("Enter ur SAP ID: ");
	scanf("%d",&sap);
	printf("Enter the Marks of First Subject: ");
	scanf("%d",&a);
	printf("Enter the Marks of Second Subject: ");
	scanf("%d",&b);
	printf("Enter the Marks of Third Subject: ");
	scanf("%d",&c);
	printf("Enter the Marks of Fourth Subject: ");
	scanf("%d",&d);
	printf("Enter the Marks of Fifth Subject: ");
	scanf("%d",&e);
	cgpa = (a+b+c+d+e)/5;
	
	if (cgpa >= 9){
		printf("OutStanding\n");
	}
	if (cgpa >= 7.5 && cgpa < 9){
		printf("Excellent\n");
	}
	if (cgpa >= 6 && cgpa < 8){
		printf("Good\n");
	}
	if (cgpa >= 4 && cgpa < 6){
		printf("Average\n");
	}
	if (cgpa < 4){
		printf("Fail\n");
	}
	
	

    return 0 ;
    
    }