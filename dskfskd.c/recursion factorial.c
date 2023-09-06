#include<stdio.h>
int main()
{
	int result=sum(2);
	printf("%d is your factorial");
	
	return 0;
}
int sum(int a)
{
	if(a>1)
	{
		return a*sum(a-1);
	}
	else
	{
		return 1;
	}
}
