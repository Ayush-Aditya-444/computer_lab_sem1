#include<stdio.h>
int main()
{
	int stud[4][2];
	int i,j;
	
	for(i=0; i<=3; i++)
	{
		printf("Enter roll no. and marks");
		scanf("%d", &stud[i][0]);
		scanf("%d", &stud[i][1]);
	}
	//printf("%d %d\n", stud[0][0], stud[0][1]);
	
	for(i=0; i<=3; i++){
	
	printf("%d %d\n", stud[i][0], stud[i][1]);
}
	return 0;
	
}
