#include<stdio.h>
int main()
{
	float kilometer,meter;
	printf("ENTER KILOMETER WHICH YOU WOULD LIKE TO CONVERT INTO METER:");
	scanf("%f",&kilometer);
	meter=kilometer*1000;
	printf("%f is output.",meter);
	
	return 0;
}
