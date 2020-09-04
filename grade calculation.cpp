#include<stdio.h>
int main()
{
	int marks;
	char grade,n;        
	printf("\t\tGrade Calculation....!\n");
	printf("\nEnter name : ");
	scanf("%s",&n);          //Enter name
	printf("\nEnter marks : ");
	scanf("%d",&marks);     //Enter marks obtained by student
	
	if( marks>=85 && marks<=100)
	{
		grade='A';
	}
	else if( marks>=70 && marks<85 )
	{
		grade='B';
	}
	else if( marks>=55 && marks<70 )
	{
		grade='C';
	}
	else if( marks>=40 && marks<55 )
	{
		grade='D';
	}
	else
	{
		grade='F';
	}
	
	printf("\nGrade = %c",grade);           //output : grade , according to marks obtained
	
	return 0;
}
