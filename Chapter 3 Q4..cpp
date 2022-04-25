#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter The Year\n");
	scanf("%d", &a);
	a=a*365;
	a=a%7;
	if(a==0)
	{
		printf("It is Monday");
	}
	else if(a==1)
	{
		printf("It is Tuesday");
	}
	else if(a==2)
	{
		printf("It is Wednesday");
	}
	else if(a==3)
	{
		printf("It is Thursday");
	}
	else if(a==4)
	{
		printf("It is Friday");
	}
	else if(a==5)
	{
		printf("It is Saturday");
	}
	else if(a==6)
	{
		printf("It is Sunday");
	}
}
