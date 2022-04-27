#include<stdio.h>

int main()
{
    int b=1,c,e,f,g,h,a,d;
    printf("Enter Your Number\n");
    scanf("%d", &a);
    while (b<15)
    {
       	e=a%8;
		a=a/8;
    	printf("%d\n", e);
    	b++;
    	if(a<8)
    	{
    		break;
		}
	}
}
