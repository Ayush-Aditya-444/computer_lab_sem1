#include<stdio.h>

int main()
{
	int s,p,r,t;
	printf("Enter the Principal Amount:");
	scanf("%d", &p);
	printf("Enter the Rate to be charged:");
	scanf("%d", &r);
	printf("Enter the Amount of Time Needed:");
	scanf("%d", &t);
	s=(p*r*t)/100;
	printf("Simple Interest Value= %d");
}
