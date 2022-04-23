#include<stdio.h>

int main()
{
	int a, b, c, d, e;
	float f, g;
	printf("Enter Lenght of Rectangle:");
	scanf("%d", &a);
	printf("Enter Breadth of Rectangle:");
	scanf("%d", &b);
	printf("Enter Radius Of Circle:");
	scanf("%d", &c);
	d=(a+b)*2;
	e=a*b;
	f=2*3.14*c;
	g=3.14*c*c;
	printf("Perimeter Of Rectangle= %d", d);
	printf("\nArea Of Rectangle= %d", e);
	printf("\nCircumference Of Circle= %f", f);
	printf("\nArea Od Circle= %f", g);
}
