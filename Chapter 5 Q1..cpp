#include<stdio.h>
#include<math.h>

int main()
{
	int a,d,f,g,h;
	printf("Enter No. of Hours of Overtime\n");
	scanf("%d" ,&a);
	int c=0;
	int e=1;
	while (e<=a)
	{
		c=c+120;
		e++;
	}
	printf("Total Amount To be Paid = %d", c);
}
