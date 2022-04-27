#include<stdio.h>

int main()
{
	int a,c;
	printf("Enter the Last Number of Your Sequence\n");
	scanf("%d", &a);
	int b=1;
	printf("In Ascending Order\n");
	while (b<=a)
	{
		printf("%d\n", b);
		b++;
	}
	printf("In Decreasing Order\n");
	c=0;
	while (a--)
	{
		printf("%d\n", a+1);
	}
	return 0;
}
