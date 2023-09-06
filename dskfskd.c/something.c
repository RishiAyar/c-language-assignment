#include<stdio.h>
int main()
{
	int result=sum(10);
	printf("%d is your addition",result);
	
	
	return 0;
}
int sum(int a)
{
	if(a>0)
	{
		return a+sum(a-1);
	}
	else
	{
		return 0;
	}
}
