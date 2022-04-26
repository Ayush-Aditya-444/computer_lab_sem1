#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter You Three Numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is the Greatest Number", a);
		}
	}
	else if(b>c)
	{
		if(b>c)
		{
			printf("%d is the Greatest Number", b);
		}
	}
	else if(c>a)
	{
		if(c>b)
		{
			printf("%d is the Greatest Number", c);
		}
	}
}
