#include<iostream>
using namespace std;
int sum(int no)
{
	int total=0;
	while(no!=0)
	{
		total+=no%10;
		no/=10;
	}
	return total;
}
int main()
{
	int no;
	cout<<"Enter a number\n";
	cin>>no;
	cout<<no<<":"<<sum(no)<<"\n";
	return 0;
}
