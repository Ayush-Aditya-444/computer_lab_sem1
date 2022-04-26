 #include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter values of 3 sides of Triangle\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a==b && b==c && a==c)
	{
		printf("It is a Equilateral Trianlge");
	}
	else if(a==b || b==c ||a==c)
	{
		printf("It is a Isosceles Triangle");
	}
	else
	{
		printf("It is a Scalene Triangle");
	}
}
