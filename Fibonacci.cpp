#include<iostream>
using namespace std;
void fibo(int no)
{
	int a=0;
	int b=1;
	cout<<"0:1:";
	for(int i=0;i<no-2;i++)
	{
		int temp;
		temp=a+b;
		a=b;
		b=temp;
		cout<<b<<":";
	}
	cout<<"\n";
}
int main()
{
	int no;
	cout<<"Enter number"<<endl;
	cin>>no;
	fibo(no);
	return 0;
}
