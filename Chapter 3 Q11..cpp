#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e,f,g,h;
    printf("Enter the Circle's Centre Co-ordinates\n");
    scanf("%d%d", &d, &e);
	printf("Enter the Radius Of The Circle\n");
	scanf("%d", &c);
	printf("Enter Points on Graph To Check Whether It is Inside The Circle or Not\n");
	scanf("%d%d", &a, &b);
	f=sqrt(pow((a-d),2)+pow((b-e),2));  
    if(f<c)  
    {  
        printf("Point (%d, %d) is inside the Circle\n", a, b);  
    }  
    else if(f>c)  
    {  
        printf("Point (%d, %d) is outside the Circle\n", a, b);  
    }  
    else  
    {  
        printf("Point (%d, %d) is on the Circle\n", a, b);  
    } 
	
}
