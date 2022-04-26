#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e,f,g,h;
        printf("Enter 1st Points on Graph \n");
	scanf("%d%d", &a, &b);
	    printf("Enter 2nd Points on Graph \n");
	scanf("%d%d", &c, &d);
	    printf("Enter 3rd Points on Graph \n");
	scanf("%d%d", &e, &f);
	g=(d-b)/(c-a);  
    h=(f-d)/(e-c);  
    if(g==h)  
    {  
        printf("All 3 points lie on the same line\n");  
    }  
    else  
    {  
        printf("All 3 points do not lie on the same line\n");  
    } 
}
