#include<stdio.h>
int main()
{
	float days,year;
	printf("enter the number of days to calculate year:");
	scanf("%f",&days);
	year=(days/365);
	printf("year: %f",year);
	
	return 0;
}
