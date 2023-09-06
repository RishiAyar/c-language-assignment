#include<stdio.h>
int main()
{
	int i,k,num[100],j,temp;
	printf("how many Element you want to enter");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",num[i]);
 	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
					
			}
		}
		printf("%d",num[i]);
	}

	return 0;
}
