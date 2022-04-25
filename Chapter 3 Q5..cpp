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
	printf("Reversed Version:%d%d%d%d%d\n", b, c, d, e, f);
	i=b*10000+c*1000+d*100+e*10+f;
	if(a==i)
	{
		printf("Original Number Is Equal To Reversed Number");
	}
	else
	{
		printf("Original Number Is Not Equal To Reversed Number");
	}
}
