#include<stdio.h>
int main()
{
	int i=0,number;
	printf("enter number:");
	scanf("%d",&number);
	do{
	    printf("%d\n",i);
	    i++;
	}while(i<=number);
    return 0;
}
