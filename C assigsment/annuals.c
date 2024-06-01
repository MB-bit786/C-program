
#include<stdio.h>
void main()
{
	int salary,a_sal; 

	printf("CALCULATING ANNUAL SALARY\n\n");

	printf("Enter Monthly Salary: $"); 
	scanf("%d",&salary);

	a_sal=salary*12; 

	printf("\nAnnual Salary: $%d\n",a_sal);
}