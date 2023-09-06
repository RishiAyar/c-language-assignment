#include<stdio.h>
#include<string.h>
struct Employee{
	int e_id;
	char name[100];
	float salary;
};
int main()
{
	struct Employee emp[100];
	int i,n;
	printf("enter how many employees detail you want to enter: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter details for %d Employee",i+1);
		printf("\n enter Employee id: ");
		scanf("%d",&emp[i].e_id);
		printf("\n enter Employee name: ");
		scanf("%s",&emp[i].name);
		printf("\n enter Employee salary: ");
		scanf("%f",&emp[i].salary);
	}
	printf("\n-----Details of Employee-----");
	for(i=0;i<n;i++)
	{
		printf("\n details of employee",i+1);
		printf("\n Employee ID id %d , Employee Name is %s , Employee salary is %f",emp[i].e_id,emp[i].name,emp[i].salary);
	}
}
