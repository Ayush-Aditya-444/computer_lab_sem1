#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e;
	printf("Enter a Number \n");
	scanf("%d", &a);
	if(a<0)
	{
		b=a*(-1);
		printf("Absolute Number = %d", b);
	}
	else
	{
		printf("Absolute Number = %d", a);
	}
}
