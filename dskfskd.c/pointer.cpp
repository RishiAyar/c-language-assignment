#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *ptr=&a;
	int i,array[3]={2,3,4};
	
	cout<<a<<endl;
	cout<<*ptr<<endl;
	
	cout<<ptr<<endl;
	cout<<&a<<endl;
	
	a=25;
	*ptr=50;
	cout<<a<<endl;
	
	for(i=0;i<3;i++)	
	{
		cout<<&array[i]<<endl;
	}
	
	cout<<*ptr1<<endl;
	cout<<*ptr+1;
	return 0;
}
