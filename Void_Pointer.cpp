#include<iostream>
using namespace std;
int main()
{
	void *ptr;
	int a=10;
	ptr=&a;
	int *ptr1=(int *)ptr;
	cout<<"*ptr:"<<*ptr1<<endl;
}
