#include<stdio.h>
int main()
{
	int no,i,flag=0;
	printf("enter number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			flag++;
		}
	}
	if(flag==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
