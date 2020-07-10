#include<iostream>
using namespace std;
template<class T>
void swap(T *a,T *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main()
{
	cout<<"Enter two numbers:\n";
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<":"<<b<<endl;
	return 0;
}
