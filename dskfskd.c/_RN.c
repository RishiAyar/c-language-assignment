#include<stdio.h>
int main()
{
	double price,rate,duration,interest;
	
	printf("enter price");
	scanf("%lf",&price);
	printf("enter rate");
	scanf("%lf",&rate);
	printf("enter duration");
	scanf("%lf",&duration);
	interest=(price*rate*duration)/100;
	printf("%lf is your total",interest);
	
	return 0;
}
