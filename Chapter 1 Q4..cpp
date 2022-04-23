#include<stdio.h>

int main()
{
	float f, c;
	printf("Enter Temperature Around Your Area (in Fahrenheit):");
	scanf("%f", &f);
	c=((f-32)*5)/9;
	printf("Temperature in Celsius= %f", c);
}
