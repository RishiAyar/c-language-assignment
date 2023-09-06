#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3=n1+n2,i,no;
	printf("enter end point:");
	scanf("%d",&no);
	printf("fibonacci series:  %d  %d  %d ",n1,n2,n3);
	for(i=1;i<=no;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf(" %d ",n3);
	}
	
	return 0;
}
