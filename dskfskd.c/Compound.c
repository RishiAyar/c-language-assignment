#include<stdio.h>
int main()
{
	int no,reminder,reverse=0;
	printf("enter number");
	scanf("%d",&no);
	while(no!=0)
	{
		reminder=no%10;
		reverse=(reverse*10)+reminder;
		no=no/10;
	}
	printf("%d",reverse);
	return 0;
}
