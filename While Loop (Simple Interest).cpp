#include<stdio.h>
int main()
{
	int p, n, count;
	float r, si;
	count=1;
	while(count==1)
	{
	
	printf("Enter the values of p, r and n");
	scanf("%d%f%d", &p,&r,&n);
    si=(p*n*r)/100;
    printf("%f", si);
    count++;
	
}
}
