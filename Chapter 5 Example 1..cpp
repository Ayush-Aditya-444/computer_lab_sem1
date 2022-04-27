#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float d,e;
	int f=1;
	while (f<=3)
	{
		printf("Enter Value of P, R & T\n");
		scanf("%d%f%d", &a, &d, &c);
		e=(a*d*c)/100;
		printf("Simple Interest = %f\n", e);
		f++;
	}
	return 0;
}
