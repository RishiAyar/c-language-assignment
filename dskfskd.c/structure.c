#include<stdio.h>
struct student
{
	int rollno;
	char name;
	float pr;
};
int main()
{
	int rollno;
	char name;
	float pr;
	scanf("%d %c %f",&rollno,&name,&pr);
	struct student s1;
	struct student s2;
	
	s1.rollno=5;
	s1.name='R';
	s1.pr=99.99;
	printf("%d is rollno, %c is name, %f is pr of first student",rollno,name,pr);
	
	return 0;
}
