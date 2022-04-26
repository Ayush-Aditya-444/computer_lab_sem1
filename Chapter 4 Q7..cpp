#include<stdio.h>
#include<math.h>

int main()
{
	int d,e,f,g,h;
	float a,b,c;
	printf("Enter Your Height(in Meter)");
	scanf("%f", &a);
	printf("Enter Your Weight(in Kg)");
	scanf("%f", &b);
	c=b/(a*a);
	if(c<15)
	{
		printf("You in the Category of Starvation");
	}
	else if(c>=15.1 && c<=17.5)
	{
		printf("You in the Category of Anorexic");
	}
		else if(c>=17.6 && c<=18.5)
	{
		printf("You in the Category of Underweight");
	}
		else if(c>=18.6 && c<=24.9)
	{
		printf("You in the Category of Ideal");
	}
		else if(c>=25 && c<=29.9)
	{
		printf("You in the Category of Overweight");
	}
		else if(c>=30 && c<=39.9)
	{
		printf("You in the Category of Morbidly Obese");
	}
		else if(c>=40)
	{
		printf("You in the Category of ");
	}
}
