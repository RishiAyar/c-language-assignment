#include<stdio.h>
int main()
{
	int i,no;
	printf("enter your end point");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("\nsquare of %d is %d",i,i*i);
	}
	
	return 0;
}
