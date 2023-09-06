#include<stdio.h>
int main()
{
	int c;
	printf("enter 1 for monday \nenter 2 for tuesday \n3 for wednesday \n4 for thursday \n5 for friday \n6 for saturday \n7 for sunday");
	printf("\n enter your choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		default:
			printf("kindly enter value from menu");
			
			
	}




}
