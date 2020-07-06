#include<iostream>
using namespace std;
int dec(int no)
{
	int num=0;
	int i=1;
	while(no!=0)
	{
		int add=(no%2)*i;
		no/=2;
		i*=10;
		num+=add;
	}
	return num;
}
int main()
{
	int no;
	cout<<"Enter a number\n";
	cin>>no;
	cout<<no<<":"<<dec(no)<<"\n";
        return 0;
}
