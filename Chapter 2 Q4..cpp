#include<stdio.h>
#include<math.h>
#define PI 3.14159265

int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	printf("Enter The Cartesian Co-Ordinates:\n");
	scanf("%d%d", &a, &b);
	c=sqrt((a*a)+(b*b));
	d=atan(b/a);
	printf("Polar Co-Ordinates are: %d%d", c, d);
}
