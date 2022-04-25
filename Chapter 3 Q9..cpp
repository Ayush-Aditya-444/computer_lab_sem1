#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e;
    printf("Enter a Length and Breadth Of the Triangle \n");
	scanf("%d%d", &a, &b);
	c=a*b;
	d=2*(a+b);
	if(c<d)
	{
		printf("Perimeter is Greater than Area");
	}
	else
	{
		printf("Area is Greater than Perimeter");
	}
}
