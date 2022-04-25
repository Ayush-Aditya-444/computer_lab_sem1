#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	printf("Enter age of Ram\n");
	scanf("%d", &a);
	printf("Enter age of Shyam\n");
	scanf("%d", &b);
	printf("Enter age of Ajay\n");
	scanf("%d", &c);
	if(a<b && a<c)
	{
		printf("Ram is Youngest");
	}
	if(b<a && b<c)
	{
		printf("Shyam is Youngest");
	}
	if(c<a && c<b)
	{
		printf("Ajay is Youngest");
	}
}
