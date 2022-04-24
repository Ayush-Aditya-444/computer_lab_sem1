#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	printf("Enter Each Side Length of The Triangle\n");
	scanf("%d%d%d", &a, &b, &c);
	d=(a+b+c)/2;
	e=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("Area Of The Triangle: %d", e); 
}
