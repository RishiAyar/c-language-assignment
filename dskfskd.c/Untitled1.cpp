#include<stdio.h>
int main()
{
	float n1,n2,n3,n4,n5,total,pr;
	printf("enter marks of 5 subjets");
	scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
	total=n1+n2+n3+n4+n5;
	printf("%f is total",total);
	pr=(total/500)*100;
	printf("/n %f is your percentage",pr);
	
	return 0;
}
