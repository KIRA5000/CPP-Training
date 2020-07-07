#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter a number\n";
	cin>>no;
	bool check=true;
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		{
			check=false;
			break;
		}
	}
	if(check==true)
	{
		cout<<"The number is a prime number\n";
	}
	else
	{
		cout<<"The number is not a prime number\n";
	}
	return 0;
}
