#include<stdio.h>
int main()
{
	int n,i,num[100];
	printf("enter the number of value you want?");
	scanf("%d",&n);
	printf("enter value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
	}
	
	return 0;	
}
