#include<stdio.h>
int main()
{
	int n=0, i, j;
	for (i=1; i<=4; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf("%d", n);
			n++;
		}
		printf("\n");
		
	}
}
