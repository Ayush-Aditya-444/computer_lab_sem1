#include<stdio.h>
int main()
{char sex, ms;
int age;
printf("Enter age, sex, martial status");
scanf("%d%c%%c", &age, &sex,&ms);
if(ms=='M')
printf("Driver should be insured");
else
{
if(sex=='M')
{
	if(age>30)
	printf("Driver should be insured");
	else
	printf("Driver should not be insured");
	
}
else
{
	if(age>25)
	printf("Driver should be insured");
	else 
	printf("Driver should not be insured");

}
}
}
