#include<stdio.h>

int main()
{
	int a,c,d,e,f,g,h;
	float b;
	printf("Enter Hardness Level");
	scanf("%d", &a);
	printf("Enter Carbon Content");
	scanf("%f", &b);
	printf("Enter Tensile Strength");
	scanf("%d", &c);
	if(a>50 && b<0.7 && c>5600)
	{
		printf("It is a Grade 10 Material");
	}
	else if(a>50 && b<0.7)
	{
		printf("It is a Grade 9 Material");
	}
	else if(a>50 && c>5600)
	{
		printf("It is a Grade 7 Material");
	}
	else if(b>0.7 && c>5600)
	{
		printf("It is a Grade 8 Material");
	}
	else if(a>50 || b<0.7 ||c>5600)
	{
		printf("It is a Grade 6 Material");
	}
	else 
	{
		printf("It is a Grade 5 Material");
	}
}
