#include<stdio.h>

int main()
{
	int s, d, r;
	printf("Enter Salary of Ramesh:");
	scanf("%d", &s);
	d=(s*40)/100;
	printf("Dearness Allowance= %d", d);
	r=(s*20)/100;
	printf("\nRent Allowance= %d", r);
}
