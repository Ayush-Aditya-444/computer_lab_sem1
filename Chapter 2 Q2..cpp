#include<stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	printf("Enter A 5-Digit Number\n");
	scanf("%d", &a);
	b=a%10;
	g=a/10;
	c=g%10;
	h=a/100;
	d=h%10;
	i=a/1000;
	e=i%10;
	j=a/10000;
	f=j%10;
	printf("\nReversed Version:%d%d%d%d%d", b, c, d, e, f);
}
