#include<stdio.h>
int main()
{
	int num[100],i,j,n,avg,count=0;
	printf("enter your value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		count=count+num[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("%d",avg);
	}
	return 0;
}
