#include<stdio.h>

int main()
{
	int a;
	printf("Enter The Year you want to Check if it is a Leap Year or Not\n");
	scanf("%d", &a);
	if(a%400==0 || a%4==0)
	{
		printf("It is a Leap Year");
	}
	else
	{
			printf("It is Not a Leap Year");	
	}
}
