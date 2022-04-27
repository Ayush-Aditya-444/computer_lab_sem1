#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d;
	printf("Enter A Number\n");
	scanf("%d", &a);
	printf("Enter he Power Given to the Number\n");
	scanf("%d", &b);
	c=pow(a,b);
	printf("Answer:- %d", c);
}
