#include<stdio.h>
#include<math.h>

int main()
{
	int a=1,b,c,d,e,f,g,h,i,j,k,l,m,n,o=154;
	while (a<=500)
	{
		b=(a-(a/10)*10);
		c=(a/10)-((a/100)*10);
		d=(a/100)-((a/1000)*10);
		e=pow(b,3);
		f=pow(c,3);
		g=pow(d,3);
		h=e+f+g;
		if(h==a)
		{
			printf("%d is an Armstrong Number\n", a);
		}
		a++;
    }
}
