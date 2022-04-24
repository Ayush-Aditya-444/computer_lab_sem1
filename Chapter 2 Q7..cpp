#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, d, e, f, g, h, radian;
	    const float PI = 3.14159;
	printf("Enter Angle(in degree): ");
	scanf("%f", &a);
	radian=a*(PI / 180.0);
	b=sin(radian);
	c=cos(radian);
	d=tan(radian);
	e=1/sin(radian);
	f=1/cos(radian);
	g=1/tan(radian);
	
	printf("\nSin(a) Value: %f\n", b);
		printf("Cos(a) Value: %f\n", c);
		    printf("Tan(a) Value: %f\n", d);
			    printf("Cosec(a) Value: %f\n", e);
				    printf("Sec(a) Value: %f\n", f);
					    printf("Cot(a) Value: %f\n", g);
}
