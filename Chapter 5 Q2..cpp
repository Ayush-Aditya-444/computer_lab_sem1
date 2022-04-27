#include<stdio.h>
#include<math.h>

int main()
{
	int a, b=1, c=1;
	printf("Enter Your Number\n");
	scanf("%d", &a);
	while (b<=a)
	{
		c=c*b;
		b++;
	}
	printf("The Factorial of %d is %d", a, c);
	return 0;
}
