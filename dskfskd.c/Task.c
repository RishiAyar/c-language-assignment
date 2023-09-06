#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter number");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		printf("%d is greater than %d",n1,n2);
    }
    else
    {
    	printf("%d is greater than %d",n2,n1);
	}
}
