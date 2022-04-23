#include<stdio.h>

int main()
{
	int a, b, c, d, e, f, g;
	printf("Enter a 5-Digit Number\n");
	scanf("%d", &a);
	b=a%10;
	c=b%10;
	d=c%10;
	e=d%10;
	f=e%10;
	g=b+c+d+e+f;
	printf("Sum= %d", g);
}
