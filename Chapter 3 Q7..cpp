#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	    printf("Enter 1st angle of the Triangle\n");
	scanf("%d", &a);
		printf("Enter 2nd angle of the Triangle\n");
	scanf("%d", &b);
		printf("Enter 3rd angle of the Triangle\n");
	scanf("%d", &c);
	d=a+c+b;
	if(d==180)
	{
		printf("Triangle Could be Possible");
	}
	else
	{
		printf("Triangle is Not Possible");
	}
}
