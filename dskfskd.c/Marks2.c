/*#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	if(marks>=35 && marks<=100)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}*/
#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	if(marks>100)
	{
		printf("invalid");
	}
	else if(marks>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}

