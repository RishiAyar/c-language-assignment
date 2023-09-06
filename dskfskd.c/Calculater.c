#include<stdio.h>
int main()
{
	int a,b,ans;
	char ch;
	printf("for multiplication enter: (*) \nfor division enter: (/) \nfor minuse enter: (-) \nfor sum enter: (+)");
	printf("\nenter your choice:");
	scanf("%c",&ch);
	printf("enter no1:");
	scanf("%d",&a);
	printf("enter no2:");
	scanf("%d",&b);
	switch(ch)
	{
		case '*':
			ans=a*b;
			printf("%d is multplication of your numbers",ans);
			break;
		case '/':
			ans=a/b;
			printf("%d is division of your numbers",ans);
			break;
		case '-':
			ans=a-b;
			printf("%d is substraction of your numbers",ans);
			break;
		case '+':
			ans=a+b;
			printf("%d is sum of your numbers",ans);
			break;
		default:
			printf("invalid");
			break;
			
			
	}



return 0;
}
