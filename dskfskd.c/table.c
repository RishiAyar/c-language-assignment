#include<stdio.h>
int main()
{
	int i,j,num[3][3];
	printf("enter 15 value");
	for(i=0;i<3;i++);
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
}
