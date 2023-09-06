#include<stdio.h>
int main()
{
	int i,j,row=5;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
/*I=rows j=columns
i=1 1<3 j=1 1<=1 8 j=2
j=2 2<=1 false i++ i=2
2<3 j=1 1<=2 * j=2 2<=2 * j=3 3<=2 false
i=3 3<5 j=1 1<3 * j=2 2<3 * j=3 3<=3 * j=4 4<=3 false
i=4 4<5 j=1 1<3 * j=2 2<4 * j=3 3<=4 * j=4 4<=4 * j=5 5<=4 false
i=5 5<5 false exit from loop*/
