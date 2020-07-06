#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<":"<<b<<"\n";
        return 0;
}
