#include<stdio.h>

int main()
{
	int d, m, c;
	float f, i;
	printf("Enter the Distance Between the 2 Cities(in Km)");
	scanf("%d", &d);
	m=d*1000;
	f=d*3280.84;
	i=d*39370.1;
	c=d*100000;
	printf("Distance in Meters= %d", m);
	printf("\nDistance in Feet= %f", f);
	printf("\nDistance in Inches= %f", i);
	printf("\nDistance in Centimeters= %d", c);
}
