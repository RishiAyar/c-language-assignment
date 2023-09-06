#include<stdio.h>
int main()
{
	int age;
	printf("entre your age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("able to give vote");
	}
	else
	{
		printf("you are unable to submit vote");
	}
}
