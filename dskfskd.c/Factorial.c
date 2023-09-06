#include<stdio.h>
int main()
{
	int i,no=1,j;
	printf("enter your number");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		no=no*i;
	}
	printf("%d is %d",j,no);
	
	return 0;
}
