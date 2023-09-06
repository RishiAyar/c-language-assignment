#include<stdio.h>
int main()
{
	int no,reminder,reverse=0,original;
	printf("enter number");
	scanf("%d",&no);
	original=no;
	while(no!=0)
	{
		reminder=no%10;
		reverse=(reverse*10)+reminder;
		no=no/10;
	}
	printf("\n%d is your reverse number",reverse);
	if(original==reverse)
	{
		printf("\nNumber is pelindrome");
	}
	else
	{
		printf("\nNumber is not pelindrome");
	}
	return 0;
}
