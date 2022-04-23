#include<stdio.h>

int main()
{
	int m, e, p, c, b;
	float per, a;
	    printf("Enter Your Marks Obtained in Maths");
	scanf("%d", &m);
		printf("Enter Your Marks Obtained in English");
	scanf("%d", &e);
		printf("Enter Your Marks Obtained in Physics");
	scanf("%d", &p);
		printf("Enter Your Marks Obtained in Chemistry");
	scanf("%d", &c);
		printf("Enter Your Marks Obtained in Biology");
	scanf("%d", &b);
	per=((m+e+p+c+b)/500)*100;
	a=(m+e+p+c+b)/5;
	    printf("Your Percentage= %f", per);
	    printf("\nYour Aggregate Marks= %f", a);

}
