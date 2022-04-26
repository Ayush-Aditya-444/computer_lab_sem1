#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter values of 3 sides of Triangle\n");
	scanf("%d%d%d", &a, &b, &c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
    	printf("Triangle is Possible");
	}
	else
	{
		printf("Triangle is Not Possible");
	}
}
