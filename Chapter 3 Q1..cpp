#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	printf("Enter the Cost Price of the Product\n");
	scanf("%d", &a);
	printf("Enter the Selling Price of the Product\n");
	scanf("%d", &b);
	c=b-a;
	if(c>=0)
	{
		printf("Profit Made = %d", c);
	}
	else
	{
		printf("Loss Incurred = %d", c);
	}
}
