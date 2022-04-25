#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e,f,g,h;
    printf("Enter the Co-ordinates\n");
    scanf("%d%d", &d, &e);
    if(d==0 && e>0)
    {
    	printf("It lies on the Y-axis");
	}
	else if(e==0 && d>0)
	{
		printf("It lies on the X-axis");
	}
	else if(d>0 && e>0)
	{
		printf("It doesn't lies on either of the axes");
	}
	else if(d==0 && e==0)
	{
		printf("It the Centre of the Graph");
	}
}
