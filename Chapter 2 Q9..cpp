#include<stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j, k, l;
	printf("Enter Your Amount :");
	scanf("%d", &a);
	b=a/100;
	h=a%100;
	c=h/50;
	i=h%50;
	d=i/10;
	j=i%10;
	e=j/5;
	k=j%5;
	f=k/2;
	l=k%2;
	g=l/1;
	printf("Number of Rs100 Notes = %d\n", b);
	printf("Number of Rs50 Notes = %d\n", c);
	printf("Number of Rs10 Notes = %d\n", d);
	printf("Number of Rs5 Notes = %d\n", e);
	printf("Number of Rs2 Notes = %d\n", f);
	printf("Number of Rs1 Notes = %d\n", g);
}
